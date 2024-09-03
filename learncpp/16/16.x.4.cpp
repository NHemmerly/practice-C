#include <iostream>
#include <vector>
#include <limits>
#include "../includes/random.h"

#define ALPHABET_SIZE 26
#define EASY 9
#define MEDIUM 7
#define HARD 5

namespace Wordlist
{
    const std::vector<std::string_view> words {"mystery", "broccoli", "account",
                                                 "almost", "spaghetti", "opinion",
                                                  "beautiful", "distance", "luggage"};
    const std::string_view randomWord(){
        const int randIndex {Random::get(0, Wordlist::words.size() - 1)};
        return Wordlist::words[randIndex];
    }
}

class Session {
    public:
        Session(const int guesses) 
            : m_letters(ALPHABET_SIZE) 
            , m_guesses(guesses)
        {}
        std::string_view getWord() const {return m_randWord;}
        const int getGuesses() const {return m_guesses;}
        void pushLetter(const char letter) {m_letters[letter - 'a'] = true;}
        const std::vector<bool>& getLetters() const {return m_letters;}
        bool checkWin() const {
            for (const auto& letter : m_randWord)
            {
                if (m_letters[letter - 'a'] == false){
                    return false;
                }
            }
            return true;
        }
        void subtractGuesses(const char in) {
            m_wrongs += in;
            m_guesses--;
        }
        void displayGuesses() const{
            std::cout << " Wrong guesses: ";
            for (size_t i {0}; i < m_guesses; ++i)
                std::cout << "+";
            std::cout << m_wrongs;  
        }
        bool checkInput(const char in)
        {
            for (const char letter : m_randWord){
                if (in == letter){
                    return true;
                }
            }
            return false;
        }
    private:
        const std::string_view m_randWord {Wordlist::randomWord()};
        std::vector<bool> m_letters;
        std::string m_wrongs {};
        int m_guesses{};
        bool m_won = false;
};

void displayWord(Session& game)
{
    std::cout << "The word: ";
    for (size_t i {0}; i < game.getWord().size(); ++i){
        if (game.getLetters()[game.getWord()[i] - 'a'])
            std::cout << game.getWord()[i];
        else
            std::cout << "_";
    }
    game.displayGuesses();
    std::cout << std::endl;
}

const char getInput(const std::vector<bool>& letters)
{
    char input {};
    while (true){
        std::cout << "Enter a lowercase letter: ";
        std::cin >> input;
        
        if (letters[input - 'a'])
        {
            std::cin.clear();
            std::cout << "letter already guessed, try again." << std::endl;
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            continue;
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
            continue;
        }
        break;
    }
    std::cout << "You entered: " << input << std::endl;
    return input;
}

bool tryParse(std::string& input, int& output)
{
    try{
        output = std::stoi(input);
    } catch (std::invalid_argument& e) {
        return false;
    }
    if (output > 3 || output < 1)
    {
        return false;
    }
    return true;
}

const int selectDifficulty()
{
    std::cout << "Please select a difficulty: \n" <<
                "1. Easy\n" <<
                "2. Medium\n" <<
                "3. Hard" << std::endl;
    std::string input;
    int out {};

    getline(std::cin, input);
    while (!tryParse(input, out)) {
        std::cout << "Invalid entry! Please enter a value between 1 and 3: ";
        getline(std::cin, input);
    }
    switch (out)
    {
        case 1: return EASY;
        case 2: return MEDIUM;
        case 3: return HARD;
        default: return 9;
    }
}

void handleTurn(Session& game){
        char in = getInput(game.getLetters());
        game.pushLetter(in);
        if(!(game.checkInput(in))){
            std::cout << "'" << in << "'" << " is incorrect!\n" << std::endl;
            game.subtractGuesses(in);
        } else {
            std::cout << "'" << in << "'" << " is correct!\n" << std::endl;
        }    
}

void gameLoop(){
    Session start (selectDifficulty());
    while (start.getGuesses() > 0){
        if (start.checkWin()){
            std::cout << "You win! The word was: " << start.getWord() << std::endl;
            break;
        }
        displayWord(start);
        handleTurn(start);
    }
    if (!(start.checkWin())){
        std::cout << "Sorry! You lose. The word was: " << start.getWord() << std::endl;
    }
}

int main()
{
    std::cout << "Welcome to C++man (a variant of Hangman)" << std::endl;
    std::cout << "To win: guess the word. To lose: run out of pluses.\n" << std::endl;
    gameLoop();
}
