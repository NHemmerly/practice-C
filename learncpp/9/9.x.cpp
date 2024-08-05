#include <iostream>
#include "random.h" // https://www.learncpp.com/cpp-tutorial/global-random-numbers-random-h/

void ignoreLine()
{
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}

bool hasUnexpectedInput()
{
    return !std::cin.eof() && std::cin.peek() != '\n';
}

bool clearInvalidInput()
{
        if (!std::cin){
            if (std::cin.eof()){
                exit(0);
            }
        
            //Handle the error
            std::cin.clear();
            ignoreLine();
            return true;
        }
        /*if (hasUnexpectedInput()){
            return true;
        }*/
        return false;
}


int getGuess(int count, int min, int max)
{
    while (true)
    {
        std::cout << "Guess #" << count << ": ";

        int guess{};
        std::cin >> guess;

        if(clearInvalidInput())
        {
            continue;
        }

        if (guess > max){
            std::cout << "Guess must be lower than " << max << ". Enter a lower number." << std::endl;
            continue;
        } else if (guess < min){
            std::cout << "Guess must be higher than " << min << ". Enter a higher number." << std::endl;
            continue;
        } else {
            ignoreLine();
            return guess;
        }
    }

}
// returns true if the user won, false if they lost
bool playHiLo(int guesses, int min, int max)
{
	std::cout << "Let's play a game. I'm thinking of a number between " << min << " and " << max << ". You have " << guesses << " tries to guess what it is.\n";
	int number{ Random::get(min, max) }; // this is the number the user needs to guess

	// Loop through all of the guesses
	for (int count{ 1 }; count <= guesses; ++count)
	{

        int guess{getGuess(count, min, max)};

		if (guess > number)
			std::cout << "Your guess is too high.\n";
		else if (guess < number)
			std::cout << "Your guess is too low.\n";
		else // guess == number, so the user won
		{
			std::cout << "Correct! You win!\n";
			return true;
		}
	}

	// The user lost
	std::cout << "Sorry, you lose. The correct number was " << number << '\n';
	return false;
}

bool playAgain()
{
	// Keep asking the user if they want to play again until they pick y or n.
	while (true)
	{
		char ch{};
		std::cout << "Would you like to play again (y/n)? ";
		std::cin >> ch;

        ignoreLine();

		switch (ch)
		{
		case 'y': return true;
		case 'n': return false;
        default:
            std::cout << "Invalid input, please try again." << std::endl;
		}
	}
}

int main()
{
	constexpr int guesses { 7 }; // the user has this many guesses
	constexpr int min     { 1 };
	constexpr int max     { 100 };

	do
	{
		playHiLo(guesses, min, max);
	} while (playAgain());

	std::cout << "Thank you for playing.\n";

	return 0;
}