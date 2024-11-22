#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <ctime>
#include <windows.h>

using namespace std;

void GAMENUMBER2();
void GAMENUMBER3();

void displayHangman(int wrongAttempts) {
    if (wrongAttempts == 0) { 
            cout << "   _____" << endl; 
            cout << "  |     " << endl; 
            cout << "  |     " << endl; 
            cout << "  |" << endl; 
            cout << "  |" << endl; 
            cout << "  |" << endl; 
            cout << "  |" << endl; 
        } else if (wrongAttempts == 1) { 
            cout << "   _____" << endl; 
            cout << "  |     |" << endl; 
            cout << "  |     " << endl; 
            cout << "  |" << endl; 
            cout << "  |" << endl; 
            cout << "  |" << endl; 
            cout << "  |" << endl; 
        } 
else if (wrongAttempts == 2) { 
            cout << "   _____" << endl; 
            cout << "  |     |" << endl; 
            cout << "  |     O" << endl; 
            cout << "  |" << endl; 
            cout << "  |" << endl; 
            cout << "  |" << endl; 
            cout << "  |" << endl; 
        } 
else if (wrongAttempts == 3) { 
            cout << "   _____" << endl; 
            cout << "  |     |" << endl; 
            cout << "  |     O" << endl; 
            cout << "  |" << endl; 
            cout << "  |" << endl; 
            cout << "  |" << endl; 
            cout << "  |" << endl; 
        } 
        else if (wrongAttempts == 4) { 
            cout << "   _____" << endl; 
            cout << "  |     |" << endl; 
            cout << "  |     O" << endl; 
            cout << "  |     |" << endl; 
            cout << "  |" << endl; 
            cout << "  |" << endl; 
            cout << "  |" << endl; 
        } 
        else if (wrongAttempts == 5) { 
            cout << "   _____" << endl; 
            cout << "  |     |" << endl; 
            cout << "  |     O" << endl; 
            cout << "  |    /|" << endl; 
            cout << "  |" << endl; 
            cout << "  |" << endl; 
            cout << "  |" << endl; 
        } 
        else if (wrongAttempts == 6) { 
            cout << "   _____" << endl; 
            cout << "  |     |" << endl; 
            cout << "  |     O" << endl; 
            cout << "  |    /|\\" << endl; 
            cout << "  |" << endl; 
            cout << "  |" << endl; 
            cout << "  |" << endl; 
        } 
        else if (wrongAttempts == 7) { 
            cout << "   _____" << endl; 
            cout << "  |     |" << endl; 
            cout << "  |     O" << endl; 
            cout << "  |    /|\\" << endl; 
            cout << "  |    /" << endl; 
            cout << "  |" << endl; 
            cout << "  |" << endl; 
        } 
        else if (wrongAttempts == 8) { 
            cout << "   _____" << endl; 
            cout << "  |     |" << endl; 
            cout << "  |     O" << endl; 
            cout << "  |    /|\\" << endl; 
            cout << "  |    / \\" << endl; 
            cout << "  |" << endl; 
            cout << "  |" << endl; 
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

        char guess;
        cout << "Enter a letter: ";
        cin >> guess;
        guess = tolower(guess);

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
            cout << "Congratulations! You've guessed the word: " << word << endl;
            break;
        }
    }

    if (wrongAttempts == maxAttempts) {
        displayHangman(wrongAttempts);
        cout << "You've been hanged! The word was: " << word << endl;
    }
}

void mainMenuHangman() {
    while (true) {
        cout << "                                                                                                                                           " << endl;
        cout << "                                                                                                                                           " << endl;
        cout << "                                                                                                                                           " << endl;
        cout << "                           |              __   __  _______  __    _  _______  __   __  _______  __    _                 |                  " << endl;
        cout << "                           |             |  | |  ||   _   ||  |  | ||       ||  |_|  ||   _   ||  |  | |                |                  " << endl;
        cout << "                           |             |  |_|  ||  |_|  ||   |_| ||    ___||       ||  |_|  ||   |_| |                |                  " << endl;
        cout << "                           |             |       ||       ||       ||   | __ |       ||       ||       |                |                  " << endl;
        cout << "                           |             |   _   ||   _   ||  _    ||   ||  || || || ||   _   ||  _    |                |                  " << endl;
        cout << "                           |             |  | |  ||  | |  || | |   ||   |_| || ||_|| ||  | |  || | |   |                |                  " << endl;
        cout << "                           |             |__| |__||__| |__||_|  |__||_______||_|   |_||__| |__||_|  |__|                |                  " << endl;
        cout << "         __________________|____________________________________________________________________________________________|___________________   " << endl;
        cout << "                           |                                                                                            |                  " << endl;
        cout << "                           |                                                                                            |                  " << endl;
        cout << "                           |                  WELCOME TO HANGMAN! CHOOSE ONE OF THE FOLLOWING:                          |                  " << endl;
        cout << "                           |                                                                                            |                  " << endl;
        cout << "                           |                                        1. PLAY                                             |                  " << endl;
        cout << "                           |                                        2. RULES                                            |                  " << endl;
        cout << "                           |                                        3. EXIT                                             |                  " << endl;
        cout << "                           |                                                                                            |                  " << endl;
        cout << "                           |                                                                                            |                  " << endl;
        cout << "                           |                                                                                            |                  " << endl;
        cout << "                           |                                                                                            |                  " << endl;
        cout << "                           |                                                                                            |                  " << endl;
        cout << "                           |                                                                                            |                  " << endl;
        cout << "                           |                                                                                            |                  " << endl;
        cout << "                           |                                                                                            |                  " << endl;
        cout << "                           |                                                                                            |                  " << endl;
        cout << "                           |                                                                                            |                  " << endl;
        cout << "                           |                                                                                            |                  " << endl;
        cout << "                           |                                                                                            |                  " << endl;
        cout << "                           |                                                                                            |                  " << endl;
        cout << "                           |                                                                                            |                  " << endl;


        int mainChoice;
        cout << "                                                            Enter your choice: ";
        cin >> mainChoice;

        srand(static_cast<unsigned int>(time(0)));

        if (mainChoice == 1) {
            while (true) {
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
                    cout << "Invalid choice. Please select again" << endl;
                }
            }
        } else if (mainChoice == 2) {
            while (true) {
            cout << "                                                                                                                    " << endl;
            cout << "                                                                                                                    " << endl;
            cout << "                                                                                                                     " << endl;
            cout << "                                                                                                                    " << endl;
            cout << "                                     ┌──────────────────────────── ⋆⋅☆⋅⋆ ──────────────────────────────┐                    " << endl;
            cout << "                                                                                                                    " << endl;
            cout << "                    ╒═══════════════════════════════════════════════════════════════════════════════════════════════╕       " << endl;
            cout << "                                                                                                                    " << endl;
            cout << "                                                           RULES OF HANGMAN:                                               " << endl;
            cout << "                                           1. You have a limited number of incorrect guesses.                              " << endl;
            cout << "                               2. Each time you guess a letter that is not in the word, you lose a chance.                 " << endl;
            cout << "                                 3. The game ends when you either guess the word or run out of chances.                    " << endl;
            cout << "                                                    Press 0 to return to the main menu.                                    " << endl;
            cout << "                                                                                                                     " << endl;
            cout << "                                                                                                                     " << endl;
            cout << "                                                                                                                     " << endl;
            cout << "                    ╘═══════════════════════════════════════════════════════════════════════════════════════════════╛        " << endl;
            cout << "                                                                                                                     " << endl;
            cout << "                                     └──────────────────────────── ⋆⋅☆⋅⋆ ──────────────────────────────┘                                             " << endl;


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
            cout << "Invalid choice. Please try again." << endl;
        }
    }
}

void GAMENUMBER2() {
    cout << "INPUT THE SECOND GAME HERE" << endl;
}

void GAMENUMBER3() {
    cout << "INPUT THE THIRD GAME HERE" << endl;
}

void mainMenu() {
    int choice;
    while (true) {
        cout << "Welcome to the Mini-Game Menu!" << endl;
        cout << "1. Play Mini-Games" << endl;
        cout << "2. Exit" << endl;

        cin >> choice;

        if (choice == 1) {
            int miniGameChoice;
            while (true) {
                cout << "1. Hangman" << endl;
                cout << "2. GAMENUMBER2" << endl;
                cout << "3. GAMENUMBER3" << endl;
                cout << "4. Back to Main Menu" << endl;

                cin >> miniGameChoice;

                if (miniGameChoice == 1) {
                    mainMenuHangman();
                } else if (miniGameChoice == 2) {
                    GAMENUMBER2();
                } else if (miniGameChoice == 3) {
                    GAMENUMBER3();
                } else if (miniGameChoice == 4) {
                    break;
                } else {
                    cout << "Invalid choice. Please try again." << endl;
                }
            }
        } else if (choice == 2) {
            cout << "Thank you for playing!" << endl;
            break;
        } else {
            cout << "Invalid choice. Please try again." << endl;
        }
    }
}

int main() {
    SetConsoleOutputCP(CP_UTF8); //include UTF-8 or Unicode characters 
    mainMenu();
    return 0;
}
