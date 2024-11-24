#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <ctime>
#include <windows.h>
#include <cstdlib>

using namespace std;

void displayHangman(int wrongAttempts) {
    if (wrongAttempts == 0) { 
            cout << "                   __________   " << endl;
            cout << "                  |           " << endl;
            cout << "                  |           " << endl;
            cout << "                  |           " << endl;
            cout << "            ______|______     " << endl;
            cout << "          /       |     /|   " << endl;
            cout << "         /             / | " << endl;
            cout << "        /_____________/  |" << endl;
            cout << "        |             | / " << endl;
            cout << "        |_____________|/ " << endl; 
        } else if (wrongAttempts == 1) { 
            cout << "                   __________   " << endl;
            cout << "                  |          |   " << endl;
            cout << "                  |             " << endl;
            cout << "                  |            " << endl;
            cout << "            ______|______    " << endl;
            cout << "          /       |     /|   " << endl;
            cout << "         /             / | " << endl;
            cout << "        /_____________/  |" << endl;
            cout << "        |             | / " << endl;
            cout << "        |_____________|/ " << endl;  
        } 
else if (wrongAttempts == 2) { 
            cout << "                   __________   " << endl;
            cout << "                  |          |   " << endl;
            cout << "                  |          |   " << endl;
            cout << "                  |            " << endl;
            cout << "            ______|______     " << endl;
            cout << "          /       |     /|   " << endl;
            cout << "         /             / | " << endl;
            cout << "        /_____________/  |" << endl;
            cout << "        |             | / " << endl;
            cout << "        |_____________|/ " << endl; 
        } 
else if (wrongAttempts == 3) { 
            cout << "                   __________   " << endl;
            cout << "                  |          |   " << endl;
            cout << "                  |          |   " << endl;
            cout << "                  |          0   " << endl;
            cout << "            ______|______     " << endl;
            cout << "          /       |     /|   " << endl;
            cout << "         /             / | " << endl;
            cout << "        /_____________/  |" << endl;
            cout << "        |             | / " << endl;
            cout << "        |_____________|/ " << endl; 
        } 
        else if (wrongAttempts == 4) { 
            cout << "                   __________   " << endl;
            cout << "                  |          |   " << endl;
            cout << "                  |          |   " << endl;
            cout << "                  |          0   " << endl;
            cout << "            ______|______    |  " << endl;
            cout << "          /       |     /|   " << endl;
            cout << "         /             / | " << endl;
            cout << "        /_____________/  |" << endl;
            cout << "        |             | / " << endl;
            cout << "        |_____________|/ " << endl; 
        } 
        else if (wrongAttempts == 5) { 
            cout << "                   __________   " << endl;
            cout << "                  |          |   " << endl;
            cout << "                  |          |   " << endl;
            cout << "                  |          0   " << endl;
            cout << "            ______|______   /|  " << endl;
            cout << "          /       |     /|   " << endl;
            cout << "         /             / | " << endl;
            cout << "        /_____________/  |" << endl;
            cout << "        |             | / " << endl;
            cout << "        |_____________|/ " << endl; 
        } 
        else if (wrongAttempts == 6) { 
            cout << "                   __________   " << endl;
            cout << "                  |          |   " << endl;
            cout << "                  |          |   " << endl;
            cout << "                  |          0   " << endl;
            cout << "            ______|______   /|\\  " << endl;
            cout << "          /       |     /|   " << endl;
            cout << "         /             / | " << endl;
            cout << "        /_____________/  |" << endl;
            cout << "        |             | / " << endl;
            cout << "        |_____________|/ " << endl; 
        } 
        else if (wrongAttempts == 7) { 
            cout << "                   __________   " << endl;
            cout << "                  |          |   " << endl;
            cout << "                  |          |   " << endl;
            cout << "                  |          0   " << endl;
            cout << "            ______|______   /|\\  " << endl;
            cout << "          /       |     /|  /| " << endl;
            cout << "         /             / | " << endl;
            cout << "        /_____________/  |" << endl;
            cout << "        |             | / " << endl;
            cout << "        |_____________|/ " << endl; 
        } 
        else if (wrongAttempts == 8) { 
            cout << "                   __________   " << endl;
            cout << "                  |          |   " << endl;
            cout << "                  |          |   " << endl;
            cout << "                  |          0   " << endl;
            cout << "            ______|______   /|\\  " << endl;
            cout << "          /       |     /|  /|\\ " << endl;
            cout << "         /             / | " << endl;
            cout << "        /_____________/  |" << endl;
            cout << "        |             | / " << endl;
            cout << "        |_____________|/ " << endl;
        }
}

void displayWord(const string& word, const vector<char>& guessedLetters) { // Function to display the current state of the guessed word
    for (char letter : word) {
        if (find(guessedLetters.begin(), guessedLetters.end(), letter) != guessedLetters.end()) {
            cout << letter << " ";
        } else {
            cout << "_ ";
        }
    }
    cout << endl;
}

void playHangman(int maxAttempts, const vector<string>& wordList) {
    string word = wordList[rand() % wordList.size()];
    vector<char> guessedLetters;
    int wrongAttempts = 0;

    cout << "Welcome to Hangman!" << endl;

    while (wrongAttempts < maxAttempts) {
        displayHangman(wrongAttempts);
        displayWord(word, guessedLetters);

        cout << "Guessed letters: ";
        for (char letter : guessedLetters) {
            cout << letter << " ";
        }
        cout << endl;

        string input; // Change from char to string for input
        cout << "Enter a letter: ";
        cin >> input;

        // Check if the input is more than one character
        if (input.length() != 1) {
            cout << "Please enter only one letter!" << endl;
            continue; // Continue to the next iteration of the loop
        }

        char guess = tolower(input[0]); // Get the first character

        if (find(guessedLetters.begin(), guessedLetters.end(), guess) != guessedLetters.end()) {
            cout << "You already guessed that letter!" << endl;
            continue;
        }

        guessedLetters.push_back(guess);

        if (word.find(guess) == string::npos) {
            wrongAttempts++;
            cout << "Wrong guess! You have " << (maxAttempts - wrongAttempts) << " attempts left." << endl;
        } else {
            cout << "Good guess!" << endl;
        }

        bool allGuessed = true;
        for (char letter : word) {
            if (find(guessedLetters.begin(), guessedLetters.end(), letter) == guessedLetters.end()) {
                allGuessed = false;
                break;
            }
        }

        if (allGuessed) {
             cout << "                                            ┌──────────────────────────── ⋆⋅☆⋅⋆ ──────────────────────────────┐                    " << endl;
            cout << "                                                                                                                    " << endl;
            cout << "                            ╒═══════════════════════════════════════════════════════════════════════════════════════════════╕       " << endl;
            cout << "                                                                                                                            " << endl;
            cout << "                                         Congratulations! You've guessed the word: " << word << "!!" << endl;
            cout << "                                                                                                                            " << endl;
            cout << "                            ╘═══════════════════════════════════════════════════════════════════════════════════════════════╛        " << endl;
            cout << "                                                                                                                     " << endl;
            cout << "                                             └──────────────────────────── ⋆⋅☆⋅⋆ ──────────────────────────────┘                                             " << endl;
            break;
        }
    }

    if (wrongAttempts == maxAttempts) {
        displayHangman(wrongAttempts);
        cout << "                                                                                                                            " << endl;
        cout << "                                           ╒═══════════════════════════════════════════════════════════════════════════════════════════════╕       " << endl;
        cout << "                                                                                                                    " << endl;
        cout << "                                                                                                                            " << endl;
        cout << "                                                                   You've been hanged! Better luck next time!!!" << endl;
        cout << "                                                                                                                            " << endl;
        cout << "                                                                             The word was: " << word << endl;
        cout << "                                                                                                                            " << endl;
        cout << "                                                                                                                     " << endl;
        cout << "                                           ╘═══════════════════════════════════════════════════════════════════════════════════════════════╛        " << endl;
    }
}

void mainMenuHangman() {
    while (true) {
        cout << "                                                                                                                                           " << endl;
        cout << "                                                                                                                                           " << endl;
        cout << "                                                                                                                                           " << endl;
        cout << "                                                           ██   ██  █████  ███    ██  ██████  ███    ███  █████  ███    ██                                  " << endl;
        cout << "                                                           ██   ██ ██   ██ ████   ██ ██       ████  ████ ██   ██ ████   ██                                  " << endl;
        cout << "                                                           ███████ ███████ ██ ██  ██ ██   ███ ██ ████ ██ ███████ ██ ██  ██                                  " << endl;
        cout << "                                                           ██   ██ ██   ██ ██  ██ ██ ██    ██ ██  ██  ██ ██   ██ ██  ██ ██                                  " << endl;
        cout << "                                                           ██   ██ ██   ██ ██   ████  ██████  ██      ██ ██   ██ ██   ████                                  " << endl;
        cout << "                                                                                                                                         " << endl;
        cout << "                                ╚════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════╝" << endl;
        cout << "                                                                                                                                         " << endl;
        cout << "                                                                                                                                         " << endl;
        cout << "                                                            ╔════════════════════════════《✧》════════════════════════════╗                                                          " << endl;
        cout << "                                                                                                                                          " << endl;
        cout << "                                                                    WELCOME TO HANGMAN! CHOOSE ONE OF THE FOLLOWING:                                         " << endl;
        cout << "                                                                                                                                           " << endl;
        cout << "                                                                                                                                           " << endl;
        cout << "                                                                                                                                         " << endl;
        cout << "                                                                                                                                         " << endl;
        cout << "                                                                                       1. PLAY                                                               " << endl;
        cout << "                                                                                  __________________                                                                         " << endl;
        cout << "                                                                                                                                         " << endl;
        cout << "                                                                                      2. RULES                                                              " << endl;
        cout << "                                                                               ________________________                                                                            " << endl;
        cout << "                                                                                                                                                           " << endl;
        cout << "                                                                               3. BACK TO GAME SELECTION                                                        " << endl;
        cout << "                                                                                                                                         " << endl;
        cout << "                                                                                                                                         " << endl;
        cout << "                                                                                                                                         " << endl;
        cout << "                                                                                                                                         " << endl;
        cout << "                                                           ╚═════════════════════════════《✧》═════════════════════════════╝                                                             " << endl;
        cout << "                                                                                                                                         " << endl;
        cout << "                                                                                                                                         " << endl;
        cout << "                                                                                                                                         " << endl;
        cout << "                                                                                                                                         " << endl;
        cout << "                                                                                                                                         " << endl;
        cout << "                                                                                                                                         " << endl;
        cout << "                                                                                                                                         " << endl;
        cout << "                                                                                                                                         " << endl;
        


        int mainChoice;
        cout << "                                                            Enter your choice: ";
        cin >> mainChoice;

        srand(static_cast<unsigned int>(time(0)));

        if (mainChoice == 1) {
            while (true) {
                cout << "                        " << endl;
                cout << "Choose difficulty level:" << endl;
                cout << "1. Easy (8 attempts, max 6 letters)" << endl;
                cout << "2. Medium (7 attempts, max 9 letters)" << endl;
                cout << "3. Hard (6 attempts, max 12 letters)" << endl;
                cout << "4. Back to Main Menu" << endl;

                int choiceHangman;
                cin >> choiceHangman;

                if (choiceHangman == 1) {
                    vector<string> easyWords = {"apple", "banana", "grape", "peach", "berry", "table", "badge", "oil", "pencil", "pen", "phone"};
                    playHangman(8, easyWords);
                } else if (choiceHangman == 2) {
                    vector<string> mediumWords = {"computer", "hangman", "keyboard","programming", "development"};
                    playHangman(7, mediumWords);
                } else if (choiceHangman == 3) {
                    vector<string> hardWords = {"extraordinary", "unbelievable", "subterranean", "discombobulate", "incomprehensible"};
                    playHangman(6, hardWords);
                } else if (choiceHangman == 4) {
                    break;
                } else {
            cout << "                                        ╒══════════════════════════════════════════════════════════════════════════════════════════╕       " << endl;
            cout << "                                                                                                                    " << endl;
            cout << "                                                               !!!Invalid choice. Please select again!!!" << endl;
            cout << "                                                                                                                     " << endl;
            cout << "                                        ╘══════════════════════════════════════════════════════════════════════════════════════════╛        " << endl;
                }
            }
        } else if (mainChoice == 2) {
            while (true) {
            cout << "                                                                                                                    " << endl;
            cout << "                                                                                                                    " << endl;
            cout << "                                                                                                                    " << endl;
            cout << "                                                                                                                     " << endl;
            cout << "                                                                                                                    " << endl;
            cout << "                                             ┌──────────────────────────── ⋆⋅☆⋅⋆ ──────────────────────────────┐                    " << endl;
            cout << "                                                                                                                    " << endl;
            cout << "                            ╒═══════════════════════════════════════════════════════════════════════════════════════════════╕       " << endl;
            cout << "                                                                                                                    " << endl;
            cout << "                                                                   RULES OF HANGMAN:                                               " << endl;
            cout << "                                                                                                                     " << endl;
            cout << "                                                   1. You have a limited number of incorrect guesses.                              " << endl;
            cout << "                                                                                                                     " << endl;
            cout << "                                       2. Each time you guess a letter that is not in the word, you lose a chance.                 " << endl;
            cout << "                                                                                                                     " << endl;
            cout << "                                         3. The game ends when you either guess the word or run out of chances.                    " << endl;
            cout << "                                                                                                                     " << endl;
            cout << "                                                            Press 0 to return to the main menu.                                    " << endl;
            cout << "                                                                                                                     " << endl;
            cout << "                                                                                                                     " << endl;
            cout << "                                                                          __________                                                            " << endl;
            cout << "                                                                         |          |                                             " << endl;
            cout << "                                                                         |          |                                             " << endl;
            cout << "                                                                         |          0                                            " << endl;
            cout << "                                                                   ______|______   /|\\                                            " << endl;
            cout << "                                                                 /       |     /|  /|\\                                            " << endl;
            cout << "                                                                /             / |                                              " << endl;
            cout << "                                                               /_____________/  |                                              " << endl;
            cout << "                                                               |             | /                                             " << endl;
            cout << "                                                               |_____________|/                                               " << endl;
            cout << "                                                                                                                     " << endl;
            cout << "                                                                                                                     " << endl;
            cout << "                                                                                                                     " << endl;
            cout << "                            ╘═══════════════════════════════════════════════════════════════════════════════════════════════╛        " << endl;
            cout << "                                                                                                                     " << endl;
            cout << "                                             └──────────────────────────── ⋆⋅☆⋅⋆ ──────────────────────────────┘                                             " << endl;


                int returnToMenu;
                cin >> returnToMenu;

                if (returnToMenu == 0) {
                    break; // Exit rules section to return to main menu
                } else {
                    cout << "Invalid input. Press 0 to return to the main menu." << endl;
                }
            }
        } else if (mainChoice == 3) {
            cout << "Exiting the game. Goodbye!" << endl;
            break; // Exit the program
        } else {
            cout << "                                     ┌──────────────────────────── ⋆⋅☆⋅⋆ ──────────────────────────────┐                    " << endl;
            cout << "                                              !!!Invalid choice. Please try again!!!" << endl;
            cout << "                                     └──────────────────────────── ⋆⋅☆⋅⋆ ──────────────────────────────┘                                             " << endl;
        }
    }
}


void playWordle() {
    // list of possible words for Wordle that will be shown when playing
    vector<string> wordList = { "apple", "grape", "peach", "berry", "table", "badge" };
    srand(time(0));  // seed for random number generation

    // Pick a random word from the list
    string secretWord = wordList[rand() % wordList.size()];
    string guess;
    int attempts = 6;

    cout << "Welcome to Wordle!" << endl;
    cout << "Guess the 5-letter word. You have " << attempts << " attempts." << endl;

    // Main game loop
    while (attempts > 0) {
        cout << "\nEnter your guess: ";
        cin >> guess;

        // check the guess if it's a valid 5-letter word
        if (guess.length() != 5) {
            cout << "Please enter a 5-letter word!" << endl;
            continue;
        }

        if (guess == secretWord) {
            cout << "Congratulations! You've guessed the word correctly!" << endl;
            break;
        }
        else {
            // provide feedback on the guess
            for (int i = 0; i < 5; i++) {
                if (guess[i] == secretWord[i]) {
                    cout << guess[i] << " ";  // Indicate correct letter in the correct place
                }
                else if (secretWord.find(guess[i]) != string::npos) {
                    cout << "* ";  // Indicate correct letter, wrong place
                }
                else {
                    cout << "_ ";  // Indicate incorrect letter
                }
            }
            cout << endl;
            attempts--;
            cout << "You have " << attempts << " attempts left." << endl;

            if (attempts == 0) {
                cout << "Game over! The correct word was: " << secretWord << endl;
            }
        }
    }
}



string scrambleWord(const string& word) {
    string scrambled = word;
    random_shuffle(scrambled.begin(), scrambled.end());
    return scrambled;
}

void playWordGuesser(int difficulty) {
    vector<string> easyWords = { "cat", "dog", "fish", "bird", "apple", "board", "peach", "banana", "pencil", "air" };
    vector<string> mediumWords = { "affect", "afternoon", "album", "airline", "amazing", "medicine", "perfume" };
    vector<string> hardWords = { "extraordinary", "unbelievable", "discombobulate", "incomprehensible" };

    string word;

    // select a word based on difficulty
    if (difficulty == 1) { // Easy
        word = easyWords[rand() % easyWords.size()];
    }
    else if (difficulty == 2) { // Medium
        word = mediumWords[rand() % mediumWords.size()];
    }
    else if (difficulty == 3) { // Hard
        word = hardWords[rand() % hardWords.size()];
    }

    string scrambledWord = scrambleWord(word);
    string guess;
    int attempts;

    // Set attempts based on difficulty
    if (difficulty == 1) attempts = 5; // Easy
    else if (difficulty == 2) attempts = 4; // Medium
    else if (difficulty == 3) attempts = 3; // Hard
    cout << "                                                                                                                                                                      " << endl;
    cout << "                                                                                                                                                                      " << endl;
    cout << "                                                                                                                                                                      " << endl;
    cout << "                                                                                                                                                                      " << endl;
    cout << "                                                                       ┌───────────────────────────── ⋆⋅☆⋅⋆ ─────────────────────────────┐                                      " << endl;
    cout << "                                                                                                                                                                      " << endl;
    cout << "                                                                                                                                                                        " << endl;
    cout << "                                                                                             Guess the word: " << scrambledWord << endl;
    cout << "                                                                                                                                                                      " << endl;
    cout << "                                                                                                                                                                      " << endl;
    cout << "                                                                       └───────────────────────────── ⋆⋅☆⋅⋆ ─────────────────────────────┘                                       " << endl;
    cout << "                                                                                                                                                                      " << endl;
    cout << "                                                                                                                                                                      " << endl;

    while (attempts > 0) {
        cout << "                                                                                                                                                                      " << endl;
        cout << "                                                                          ╔═══════════════════════════《✧》════════════════════════════╗                                             " << endl;
        cout << "                                                                                                                                                                      " << endl;
        cout << "                                                                                            You have " << attempts << " attempts left.";
        cout << "                                                                                                                                                                      " << endl;
        cout << "                                                                          ╚═══════════════════════════《✧》════════════════════════════╝                                                         " << endl;
        cout << "                                                                                                                                                                      " << endl;
        cin >> guess;

        if (guess == word) {
        cout << "                                                                      ╔═══════════════════════════════《✧》════════════════════════════════╗                                             " << endl;
        cout << "                                                                                                                                                                      " << endl;
        cout << "                                                                                    Congratulations! You've guessed the word!" << endl;
        cout << "                                                                                                                                                                      " << endl;
        cout << "                                                                      ╚═══════════════════════════════《✧》════════════════════════════════╝                                            " << endl;
        cout << "                                                                                                                                                                      " << endl;
            return; // Exit the function
        }
        else {
            attempts--;
        cout << "                                                                                          ╔═══════════════════════════╗                                                              " << endl;
        cout << "                                                                                             Wrong guess. Try again." << endl;
        cout << "                                                                                          ╘═══════════════════════════╛                                                                          " << endl;

        }
    }
        cout << "                                                                                                                                                                      " << endl;
        cout << "                                                                                                                                                                      " << endl;
        cout << "                                                                         ╔════════════════════════════ ⋆★⋆ ════════════════════════════╗                               " << endl;
        cout << "                                                                                                                                                                      " << endl;
        cout << "                                                                             Sorry, you've used all your attempts. The word was: " << word << endl;
        cout << "                                                                                                                                                                      " << endl;
        cout << "                                                                         ╚════════════════════════════ ⋆★⋆ ════════════════════════════╝                                                      " << endl;
        cout << "                                                                                                                                                                      " << endl;
        cout << "                                                                                                                                                                      " << endl;
}

void WordScrambleDifficulty();
void displayWordScrambleRules();
void wordScrambleMenu() {
    while (true) {
        cout << "                                                    ██     ██  ██████  ██████  ██████      ███████  ██████ ██████   █████  ███    ███ ██████  ██      ███████        " << endl;
        cout << "                                                    ██     ██ ██    ██ ██   ██ ██   ██     ██      ██      ██   ██ ██   ██ ████  ████ ██   ██ ██      ██             " << endl;
        cout << "                                                    ██  █  ██ ██    ██ ██████  ██   ██     ███████ ██      ██████  ███████ ██ ████ ██ ██████  ██      █████           " << endl;
        cout << "                                                    ██ ███ ██ ██    ██ ██   ██ ██   ██          ██ ██      ██   ██ ██   ██ ██  ██  ██ ██   ██ ██      ██              " << endl;
        cout << "                                                     ███ ███   ██████  ██   ██ ██████      ███████  ██████ ██   ██ ██   ██ ██      ██ ██████  ███████ ███████         " << endl;
        cout << "                                                                                                                    " << endl;
        cout << "                                       ╚══════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════╝                                                                " << endl;
        cout << "                                                                                                                    " << endl;
        cout << "                                                                ╔═══════════════════════════════════《✧》════════════════════════════════════╗                                   " << endl;
        cout << "                                                                                                                    " << endl;
        cout << "                                                                             WELCOME TO WORD SCRAMBLE! CHOOSE ONE OF THE FOLLOWING:                                                        " << endl;
        cout << "                                                                                                                    " << endl;
        cout << "                                                                                                                    " << endl;
        cout << "                                                                                                                    " << endl;
        cout << "                                                                                              1. Play the game" << endl;
        cout << "                                                                                           __________________________                                             " << endl;
        cout << "                                                                                                                    " << endl;
        cout << "                                                                                                2. View rules" << endl;
        cout << "                                                                                         ______________________________                                                " << endl;
        cout << "                                                                                                                                                        " << endl;
        cout << "                                                                                            3. Back to Main Menu" << endl;
        cout << "                                                                                                                    " << endl;
        cout << "                                                                                                                                      " << endl;
        cout << "                                                                ╚════════════════════════════════════《✧》═══════════════════════════════════╝                            " << endl;
        cout << "                                                                                                                    " << endl;
        cout << "                                                                                                                    " << endl;
        cout << "                                                                                                                    " << endl;
        cout << "                                                                                                                    " << endl;

        int choice;
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 1) {
            WordScrambleDifficulty(); // Call the existing function to play Word Scramble
        }
        else if (choice == 2) {
            displayWordScrambleRules(); // Display the rules
            int returnToMenu;
            cin >> returnToMenu;
            if (returnToMenu == 0) {
                continue; // Return to the Word Scramble menu
            }
        }
        else if (choice == 3) {
            return; // Back to main menu
        }
        else {
            cout << "Invalid choice! Please select again." << endl;
        }
    }
}

void displayWordScrambleRules() {
    cout << "                                                                                                                                                          " << endl;
     cout << "                                                                                                                                                          " << endl;
    cout << "                                                                                                                                                          " << endl;
    cout << "                                                                         ┌──────────────────────────── ⋆⋅☆⋅⋆ ──────────────────────────────┐         " << endl;
    cout << "                                                                                                                                                          " << endl;
    cout << "                                                                                                                                                          " << endl;
    cout << "                                                         ╒═══════════════════════════════════════════════════════════════════════════════════════════════╕  " << endl;
    cout << "                                                                                                                                                          " << endl;
    cout << "                                                                                                                                                          " << endl;
    cout << "                                                                                              RULES OF WORD SCRAMBLE:                                    " << endl;
    cout << "                                                                                                                                                          " << endl;
    cout << "                                                                                                                                                          " << endl;
    cout << "                                                                                1. You will be given a scrambled word to guess." << endl;
    cout << "                                                                                                                                                          " << endl;
    cout << "                                                                  2. You have a limited number of incorrect guesses based on difficulty." << endl;
    cout << "                                                                                                                                                          " << endl;
    cout << "                                                                     3. The game ends when you guess the word or run out of attempts." << endl;
    cout << "                                                                                                                                                          " << endl;
    cout << "                                                                                Press 0 to return to the Word Scramble menu." << endl;
    cout << "                                                                                                                                                          " << endl;
    cout << "                                                                                                                                                          " << endl;
    cout << "                                                                                                                                                          " << endl;
    cout << "                                                                                     EXAMPLE:  f o n a e t o r n   ---> afternoon                                                                       " << endl;
    cout << "                                                                                                                                                          " << endl;
    cout << "                                                                                                                                                          " << endl;
    cout << "                                                         ╘═══════════════════════════════════════════════════════════════════════════════════════════════╛  " << endl;
    cout << "                                                                                                                                                          " << endl;
    cout << "                                                                                                                                                          " << endl;
    cout << "                                                                        └───────────────────────────── ⋆⋅☆⋅⋆ ─────────────────────────────┘          " << endl;
    cout << "                                                                                                                                                          " << endl;
    cout << "                                                                                                                                                          " << endl;
}

void WordScrambleDifficulty() {
    int choiceWordScramble;
    cout << "                                                                          ╔════════════════════════════《✧》═══════════════════════════╗                                         " << endl;
    cout << "                                                                                                                                                                      " << endl;
    cout << "                                                         ╒═══════════════════════════════════════════════════════════════════════════════════════════════╕                      " << endl;
    cout << "                                                                                                                                                                      " << endl;
    cout << "                                                                                             CHOOSE DIFFICULTY LEVEL" << endl;
    cout << "                                                                                                                                                                      " << endl;
    cout << "                                                                                                                                                                      " << endl;
    cout << "                                                                                                1. Easy (5 attempts)" << endl;
    cout << "                                                                                            ___________________________                                                     " << endl;
    cout << "                                                                                                                                                                      " << endl;
    cout << "                                                                                               2. Medium (4 attempts)" << endl;
    cout << "                                                                                           _____________________________                                                           " << endl;
    cout << "                                                                                                                                                                      " << endl;
    cout << "                                                                                               3. Hard (3 attempts)" << endl;
    cout << "                                                                                            ___________________________                                                           " << endl;
    cout << "                                                                                                                                                                      " << endl;
    cout << "                                                                                           4. Back to Word Scramble Menu" << endl;
    cout << "                                                                                                                                                                      " << endl;
    cout << "                                                                                                                                                                      " << endl;
    cout << "                                                         ╘═══════════════════════════════════════════════════════════════════════════════════════════════╛                      " << endl;
    cout << "                                                                                                                                                                      " << endl;
    cout << "                                                                           ╚═══════════════════════════《✧》════════════════════════════╝                                     " << endl;
    cout << "                                                                                                                                                                      " << endl;
    cout << "                                                                                                                                                                      " << endl;
    cout << "Enter your choice: ";
    cin >> choiceWordScramble;

    if (choiceWordScramble >= 1 && choiceWordScramble <= 3) {
        playWordGuesser(choiceWordScramble);
    }
    else if (choiceWordScramble == 4) {
        return; // Back to main menu
    }
    else {
        cout << "Invalid choice!" << endl;
    }
}

void mainMenu() {
    int choice;
    while (true) {
        cout << "                                                ╒═══════════════════════════════════════════════════════════════════════════════════════════════════════════╕" << endl;
        cout << "                                                                                                                                                              " << endl;
        cout << "                                                                  ██████  ██████  ██████  ███████ ███████  ██████  ██████   ██████  ███████                " << endl;
        cout << "                                                                  ██     ██    ██ ██   ██ ██      ██      ██    ██ ██   ██ ██       ██              " << endl;
        cout << "                                                                  ██     ██    ██ ██   ██ █████   █████   ██    ██ ██████  ██   ███ █████           " << endl;
        cout << "                                                                  ██     ██    ██ ██   ██ ██      ██      ██    ██ ██   ██ ██    ██ ██                " << endl;
        cout << "                                                                  ██████  ██████  ██████  ███████ ██       ██████  ██   ██  ██████  ███████           " << endl;
        cout << "                                                                                                                                                                      " << endl;
        cout << "                                                ╘═══════════════════════════════════════════════════════════════════════════════════════════════════════════╛ " << endl;
        cout << "                                                                                                                                                          " << endl;
        cout << "                                                                          ┌────────────────────────── ⋆⋅☆⋅⋆ ──────────────────────────┐                     " << endl;
        cout << "                                                                                                                                                              " << endl;
        cout << "                                                                                              WELCOME TO CODEFORGE!                                     " << endl;
        cout << "                                                                                                                                                            " << endl;
        cout << "                                                                                          Choose one of the following:                                   " << endl;
        cout << "                                                                                                                                                          " << endl;
        cout << "                                                                          └────────────────────────── ⋆⋅☆⋅⋆ ──────────────────────────┘                   " << endl;
        cout << "                                                                                                                                                          " << endl;
        cout << "                                                                                                                                                          " << endl;
        cout << "                                                                                      ╔═══════════════《✧》═══════════════╗                                " << endl;
        cout << "                                                                                                                                                          " << endl;
        cout << "                                                                                                    1. PLAY                                                   " << endl;
        cout << "                                                                                                ________________                                          " << endl;
        cout << "                                                                                                                                                               " << endl;
        cout << "                                                                                                  2. ABOUT US                                                  " << endl;
        cout << "                                                                                               __________________                                            " << endl;
        cout << "                                                                                                                                                          " << endl;
        cout << "                                                                                               3. EXIT THE GAME                                            " << endl;
        cout << "                                                                                                                                                          " << endl;
        cout << "                                                                                      ╚═══════════════《✧》═══════════════╝                                       " << endl;
        cout << "                                                                                                                                                                          " << endl;
        cout << "                                                                                                                                                                  " << endl;
        cout << "                                                                                                                                                                  " << endl;
        cout << "                                                                                                                                                                      " << endl;
        cout << "                                                                                                                                                                  " << endl;
        cout << "                                                                                                                                                                  " << endl;
        cout << "                                                                                                                                                                  " << endl;
        cout << "                                                                                                                                                                  " << endl;
        cout << "                                                                                                                                                                  " << endl;
        cout << "                                                                                                                                                                  " << endl;
        

        cin >> choice;

        if (choice == 1) {
            int miniGameChoice;
            while (true) {
                cout << "1. Hangman" << endl;
                cout << "2. Wordle" << endl;
                cout << "3. Word Scramble" << endl;
                cout << "4. Back to Main Menu" << endl;

                cin >> miniGameChoice;

                if (miniGameChoice == 1) {
                    mainMenuHangman();
                } else if (miniGameChoice == 2) {
                    playWordle();
                } else if (miniGameChoice == 3) {
                    wordScrambleMenu();
                } else if (miniGameChoice == 4) {
                    break;
                } else {
            cout << "                                                                                        " << endl;
            cout << "                                                               ┌──────────────────────────── ⋆⋅☆⋅⋆ ──────────────────────────────┐                    " << endl;
            cout << "                                                                                                " << endl;
            cout << "                                                                        !!!Invalid choice. Please try again!!!" << endl;
            cout << "                                                                                                " << endl;
            cout << "                                                               └──────────────────────────── ⋆⋅☆⋅⋆ ──────────────────────────────┘                                             " << endl;
                }
            }
        } else if (choice == 2) {
    while (true) {
        cout << "                                                                                                                    " << endl;
        cout << "                                             ┌──────────────────────────── ⋆⋅☆⋅⋆ ──────────────────────────────┐                    " << endl;
        cout << "                                                                                                                    " << endl;
        cout << "                                                                         ABOUT US:                                               " << endl;
        cout << "                                                                                                                    " << endl;
        cout << "                                               Lorem ipsum dolor sit amet, consectetur adipiscing elit.            " << endl;
        cout << "                                               Sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. " << endl;
        cout << "                                               Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat. " << endl;
        cout << "                                               Duis aute irure dolor in reprehenderit in voluptate velit esse cillum dolore eu fugiat nulla pariatur. " << endl;
        cout << "                                               Excepteur sint occaecat cupidatat non proident, sunt in culpa qui officia deserunt mollit anim id est laborum." << endl;
        cout << "                                                                                                                    " << endl;
        cout << "                                                    Press 0 to return to the main menu.                                    " << endl;
        cout << "                                                                                                                    " << endl;
        cout << "                                                                                                                    " << endl;

        int returnToMenu;
        cin >> returnToMenu;

        if (returnToMenu == 0) {
            break; // Exit "About Us" section to return to main menu
        } else {
            cout << "Invalid input. Press 0 to return to the main menu." << endl;
        }
    }
} else if (choice == 3) {
    cout << "Exiting the game. Goodbye!" << endl;
    break; // Exit the program
}
else {
            cout << "                                                                                        " << endl;
            cout << "                                                               ┌──────────────────────────── ⋆⋅☆⋅⋆ ──────────────────────────────┐                    " << endl;
            cout << "                                                                                        " << endl;
            cout << "                                                                        !!!Invalid choice. Please try again!!!" << endl;
            cout << "                                                                                        " << endl;
            cout << "                                                               └──────────────────────────── ⋆⋅☆⋅⋆ ──────────────────────────────┘                                             " << endl;
        }
    }
}

int main() {
    SetConsoleOutputCP(CP_UTF8); //include UTF-8 or Unicode characters 
    mainMenu();
    return 0;
}
