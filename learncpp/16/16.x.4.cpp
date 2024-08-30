#include <iostream>
#include <vector>
#include <limits>
#include "../includes/random.h"

namespace Wordlist
{
    const std::vector<std::string_view> words {"mystery", "broccoli", "account",
                                                 "almost", "spaghetti", "opinion",
                                                  "beautiful", "distance", "luggage"};

    const std::string_view randomWord()
    {
        const int randIndex {Random::get(0, Wordlist::words.size() - 1)};
        return Wordlist::words[randIndex];
    }
}

class Session {
    public:
        std::string_view getWord() const {return m_randWord;}
        void pushLetter(const char letter) {letters.push_back(letter);}
        const std::vector<char>& getLetters() const {return letters;}

    private:
        const std::string_view m_randWord {Wordlist::randomWord()};
        std::vector<char> letters {};
};

void displayWord(const Session& game)
{
    std::cout << "The word: ";
    for (size_t i {0}; i < game.getWord().size(); ++i){
        char output = '_';
        for (const char letter : game.getLetters()){
            if (game.getWord()[i] == letter){
                output = letter;
            }
        }
        std::cout << output;
    }
    std::cout << std::endl;
}

void startGame(const std::string_view word)
{
    std::cout << "The word: ";
    for (size_t i {0}; i < word.size(); ++i)
    {
        std::cout << "_";
    }
    std::cout << std::endl;
}

const char getInput(const std::vector<char>& letters)
{
    char input {};
    while (true){
        std::cout << "Enter a lowercase letter: ";
        std::cin >> input;
        for (const char letter : letters)
        {
            if (input == letter)
            {
                std::cin.clear();
                std::cout << "letter already guessed, try again." << std::endl;
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                continue;
            }
        }
        if (input < 'a' || input > 'z'){
            std::cin.clear();
            std::cout << "Invalid input, try again." << std::endl;
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            continue;
        }
        if (!std::cin)
        {
            std::cin.clear();
            std::cout << "Invalid input, try again." << std::endl;
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        }
        break;
    }
    std::cout << "You entered: " << input << std::endl;
    return input;
}

void gameLoop()
{
    Session start;
    startGame(start.getWord());
    for (size_t i {0}; i < 6; ++i)
    {
        start.pushLetter(getInput(start.getLetters()));
        displayWord(start);
    }

}

int main()
{
    std::cout << "Welcome to C++man (a variant of Hangman)" << std::endl;
    std::cout << "To win: guess the word. To lose: run out of pluses.\n" << std::endl;
    gameLoop();
}
