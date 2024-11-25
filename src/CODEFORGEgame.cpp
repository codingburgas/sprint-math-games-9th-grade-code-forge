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
        
            cout << "                                                                                                                                            " << endl;
            cout << "                                                                                                                                            " << endl;
            cout << "                                                                                                                                            " << endl;
            cout << "                                                                                                                                            " << endl;
            cout << "                                                                       ╔══════════════════════════════《✧ 》══════════════════════════════╗" << endl;
            cout << "                                                                                                                                          " << endl; 
            cout << "                                                                                                                                          " << endl;
            cout << "                                                                                                        __________                        " << endl;
            cout << "                                                                                                       |                                  " << endl;
            cout << "                                                                                                       |                                  " << endl;
            cout << "                                                                                                       |                                  " << endl;
            cout << "                                                                                                 ______|______                            " << endl;
            cout << "                                                                                               /       |     /|                           " << endl;
            cout << "                                                                                              /             / |                           " << endl;
            cout << "                                                                                             /_____________/  |                           " << endl;
            cout << "                                                                                             |             | /                            " << endl;
            cout << "                                                                                             |_____________|/                             " << endl;
            cout << "                                                                                                                                            " << endl; 
            cout << "                                                                                                                                            " << endl;
            cout << "                                                                                                                                            " << endl;
            
        } else if (wrongAttempts == 1) { 
            cout << "                                                                                                                                            " << endl;
            cout << "                                                                                                                                            " << endl;
            cout << "                                                                                                                                            " << endl;
            cout << "                                                                                                                                            " << endl;
            cout << "                                                                       ╔══════════════════════════════《✧ 》══════════════════════════════╗" << endl;
            cout << "                                                                                                                                            " << endl; 
            cout << "                                                                                                                                            " << endl;
            cout << "                                                                                                        __________                        " << endl;
            cout << "                                                                                                       |          |                       " << endl;
            cout << "                                                                                                       |                                  " << endl;
            cout << "                                                                                                       |                                  " << endl;
            cout << "                                                                                                 ______|______                            " << endl;
            cout << "                                                                                               /       |     /|                           " << endl;
            cout << "                                                                                              /             / |                           " << endl;
            cout << "                                                                                             /_____________/  |                           " << endl;
            cout << "                                                                                             |             | /                            " << endl;
            cout << "                                                                                             |_____________|/                             " << endl;
            cout << "                                                                                                                                            " << endl; 
            cout << "                                                                                                                                            " << endl;
            cout << "                                                                                                                                            " << endl;
        } 
else if (wrongAttempts == 2) { 
            cout << "                                                                                                                                            " << endl;
            cout << "                                                                                                                                            " << endl;
            cout << "                                                                                                                                            " << endl;
            cout << "                                                                                                                                            " << endl;
            cout << "                                                                       ╔══════════════════════════════《✧ 》══════════════════════════════╗" << endl;
            cout << "                                                                                                                                            " << endl; 
            cout << "                                                                                                                                            " << endl;
            cout << "                                                                                                        __________                        " << endl;
            cout << "                                                                                                       |          |                       " << endl;
            cout << "                                                                                                       |          |                       " << endl;
            cout << "                                                                                                       |                                  " << endl;
            cout << "                                                                                                 ______|______                            " << endl;
            cout << "                                                                                               /       |     /|                           " << endl;
            cout << "                                                                                              /             / |                           " << endl;
            cout << "                                                                                             /_____________/  |                           " << endl;
            cout << "                                                                                             |             | /                            " << endl;
            cout << "                                                                                             |_____________|/                             " << endl;
            cout << "                                                                                                                                            " << endl; 
            cout << "                                                                                                                                            " << endl;
            cout << "                                                                                                                                            " << endl;
        } 
else if (wrongAttempts == 3) { 
            cout << "                                                                                                                                            " << endl;
            cout << "                                                                                                                                            " << endl;
            cout << "                                                                                                                                            " << endl;
            cout << "                                                                                                                                            " << endl;
            cout << "                                                                       ╔══════════════════════════════《✧ 》══════════════════════════════╗" << endl;
            cout << "                                                                                                                                          " << endl; 
            cout << "                                                                                                                                          " << endl;
            cout << "                                                                                                        __________                        " << endl;
            cout << "                                                                                                       |          |                       " << endl;
            cout << "                                                                                                       |          |                       " << endl;
            cout << "                                                                                                       |          0                       " << endl;
            cout << "                                                                                                 ______|______                            " << endl;
            cout << "                                                                                               /       |     /|                           " << endl;
            cout << "                                                                                              /             / |                           " << endl;
            cout << "                                                                                             /_____________/  |                           " << endl;
            cout << "                                                                                             |             | /                            " << endl;
            cout << "                                                                                             |_____________|/                             " << endl;
            cout << "                                                                                                                                            " << endl; 
            cout << "                                                                                                                                            " << endl;
            cout << "                                                                                                                                            " << endl;
        } 
        else if (wrongAttempts == 4) { 
            cout << "                                                                                                                                            " << endl;
            cout << "                                                                                                                                            " << endl;
            cout << "                                                                                                                                            " << endl;
            cout << "                                                                                                                                            " << endl;
            cout << "                                                                       ╔══════════════════════════════《✧ 》══════════════════════════════╗" << endl;
            cout << "                                                                                                                                            " << endl; 
            cout << "                                                                                                                                            " << endl;
            cout << "                                                                                                        __________                        " << endl;
            cout << "                                                                                                       |          |                       " << endl;
            cout << "                                                                                                       |          |                       " << endl;
            cout << "                                                                                                       |          0                       " << endl;
            cout << "                                                                                                 ______|______    |                       " << endl;
            cout << "                                                                                               /       |     /|                           " << endl;
            cout << "                                                                                              /             / |                           " << endl;
            cout << "                                                                                             /_____________/  |                           " << endl;
            cout << "                                                                                             |             | /                            " << endl;
            cout << "                                                                                             |_____________|/                             " << endl;
            cout << "                                                                                                                                            " << endl; 
            cout << "                                                                                                                                            " << endl;
            cout << "                                                                                                                                            " << endl;
        } 
        else if (wrongAttempts == 5) { 
            cout << "                                                                                                                                            " << endl;
            cout << "                                                                                                                                            " << endl;
            cout << "                                                                                                                                            " << endl;
            cout << "                                                                                                                                            " << endl;
            cout << "                                                                       ╔══════════════════════════════《✧ 》══════════════════════════════╗" << endl;
            cout << "                                                                                                                                            " << endl; 
            cout << "                                                                                                                                            " << endl;
            cout << "                                                                                                        __________                        " << endl;
            cout << "                                                                                                       |          |                       " << endl;
            cout << "                                                                                                       |          |                       " << endl;
            cout << "                                                                                                       |          0                       " << endl;
            cout << "                                                                                                 ______|______   /|                       " << endl;
            cout << "                                                                                               /       |     /|                           " << endl;
            cout << "                                                                                              /             / |                           " << endl;
            cout << "                                                                                             /_____________/  |                           " << endl;
            cout << "                                                                                             |             | /                            " << endl;
            cout << "                                                                                             |_____________|/                             " << endl;
            cout << "                                                                                                                                            " << endl; 
            cout << "                                                                                                                                            " << endl;
            cout << "                                                                                                                                            " << endl;
        } 
        else if (wrongAttempts == 6) { 
            cout << "                                                                                                                                            " << endl;
            cout << "                                                                                                                                            " << endl;
            cout << "                                                                                                                                            " << endl;
            cout << "                                                                                                                                            " << endl;
            cout << "                                                                       ╔══════════════════════════════《✧ 》══════════════════════════════╗" << endl;
            cout << "                                                                                                                                            " << endl; 
            cout << "                                                                                                                                            " << endl;
            cout << "                                                                                                        __________                        " << endl;
            cout << "                                                                                                       |          |                       " << endl;
            cout << "                                                                                                       |          |                       " << endl;
            cout << "                                                                                                       |          0                       " << endl;
            cout << "                                                                                                 ______|______   /|\\                     " << endl;
            cout << "                                                                                               /       |     /|                           " << endl;
            cout << "                                                                                              /             / |                           " << endl;
            cout << "                                                                                             /_____________/  |                           " << endl;
            cout << "                                                                                             |             | /                            " << endl;
            cout << "                                                                                             |_____________|/                             " << endl;
            cout << "                                                                                                                                            " << endl; 
            cout << "                                                                                                                                            " << endl;
            cout << "                                                                                                                                            " << endl;
        } 
        else if (wrongAttempts == 7) { 
            cout << "                                                                                                                                            " << endl;
            cout << "                                                                                                                                            " << endl;
            cout << "                                                                                                                                            " << endl;
            cout << "                                                                                                                                            " << endl;
            cout << "                                                                       ╔══════════════════════════════《✧ 》══════════════════════════════╗" << endl;
            cout << "                                                                                                                                            " << endl; 
            cout << "                                                                                                                                            " << endl;
            cout << "                                                                                                        __________                        " << endl;
            cout << "                                                                                                       |          |                       " << endl;
            cout << "                                                                                                       |          |                       " << endl;
            cout << "                                                                                                       |          0                       " << endl;
            cout << "                                                                                                 ______|______   /|\\                     " << endl;
            cout << "                                                                                               /       |     /|  /|                       " << endl;
            cout << "                                                                                              /             / |                           " << endl;
            cout << "                                                                                             /_____________/  |                           " << endl;
            cout << "                                                                                             |             | /                            " << endl;
            cout << "                                                                                             |_____________|/                             " << endl;
            cout << "                                                                                                                                            " << endl; 
            cout << "                                                                                                                                            " << endl;
            cout << "                                                                                                                                            " << endl;
        } 
        else if (wrongAttempts == 8) { 
            cout << "                                                                                                                                            " << endl;
            cout << "                                                                                                                                            " << endl;
            cout << "                                                                                                                                            " << endl;
            cout << "                                                                                                                                            " << endl;
            cout << "                                                                       ╔══════════════════════════════《✧ 》══════════════════════════════╗" << endl;
            cout << "                                                                                                                                            " << endl; 
            cout << "                                                                                                                                            " << endl;
            cout << "                                                                                                        __________                        " << endl;
            cout << "                                                                                                       |          |                       " << endl;
            cout << "                                                                                                       |          |                       " << endl;
            cout << "                                                                                                       |          0                       " << endl;
            cout << "                                                                                                 ______|______   /|\\                     " << endl;
            cout << "                                                                                               /       |     /|  /|\\                     " << endl;
            cout << "                                                                                              /             / |                           " << endl;
            cout << "                                                                                             /_____________/  |                           " << endl;
            cout << "                                                                                             |             | /                            " << endl;
            cout << "                                                                                             |_____________|/                             " << endl;
            cout << "                                                                                                                                            " << endl; 
            cout << "                                                                                                                                            " << endl;
            cout << "                                                                                                                                            " << endl;
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

    while (wrongAttempts < maxAttempts) {
        displayHangman(wrongAttempts);
        
        cout << "                                                                                                  Guessed letters: ";
        for (char letter : guessedLetters) {
            cout << letter << " ";
        }
        cout << endl;

        cout << "                                                                                                      ";
        displayWord(word, guessedLetters); 
        cout << "                                                                                                   Enter a letter.                        " << endl;
        cout << "                                                                                                          " << endl;
        cout << "                                                                       ╚════════════════════════════════《✧ 》════════════════════════════╝" << endl;

        string input;
        cin >> input;
       
        // Check if the input is more than one character
        if (input.length() != 1) {
            system("CLS");
            cout << "                                                                                                            " << endl;
            cout << "                                                                                                            " << endl;
            cout << "                                                                                                            " << endl;
            cout << "                                                                                        ╔═════════════════════════════════╗            " << endl;
            cout << "                                                                                           Please enter only one letter!            " << endl;
            cout << "                                                                                        ╘═════════════════════════════════╛            " << endl;
            continue; // Continue to the next iteration of the loop
        }

        char guess = tolower(input[0]); // Get the first character

        if (find(guessedLetters.begin(), guessedLetters.end(), guess) != guessedLetters.end()) {
            system("CLS");
            cout << "                                                                                                            " << endl;
            cout << "                                                                                                            " << endl;
            cout << "                                                                                                            " << endl;
            cout << "                                                                                        ╔════════════════════════════════╗               " << endl;
            cout << "                                                                                          You already guessed that letter!" << endl;
            cout << "                                                                                        ╘════════════════════════════════╛" << endl;
            continue;
        }

        guessedLetters.push_back(guess);

        if (word.find(guess) == string::npos) {
            system("CLS");
            wrongAttempts++;
            cout << "                                                                                                            " << endl;
            cout << "                                                                                                            " << endl;
            cout << "                                                                                                            " << endl;
            cout << "                                                                         ╔══════════════════════════════════════════════════════════════╗               " << endl;
            cout << "                                                                                    Wrong guess! You have " << (maxAttempts - wrongAttempts) << " attempts left." << endl;
            cout << "                                                                         ╘══════════════════════════════════════════════════════════════╛               " << endl;
        } else {
            system("CLS");
            cout << "                                                                                                            " << endl;
            cout << "                                                                                                            " << endl;
            cout << "                                                                                                            " << endl;
            cout << "                                                                                          ╔══════════════════════════╗               " << endl;
            cout << "                                                                                                   Good guess!" << endl;
            cout << "                                                                                          ╘══════════════════════════╛" << endl;
        }

        bool allGuessed = true;
        for (char letter : word) {
            if (find(guessedLetters.begin(), guessedLetters.end(), letter) == guessedLetters.end()) {
                allGuessed = false;
                break;
            }
        }

        if (allGuessed) {
            system("CLS");
            cout << "                                                                                                                    " << endl;
            cout << "                                                                                                                    " << endl;
            cout << "                                                                                                                    " << endl;
            cout << "                                                                                                                    " << endl;
            cout << "                                                                                                                    " << endl;
            cout << "                                                                                                                    " << endl;
            cout << "                                                                                                                    " << endl;
            cout << "                                                                                                                    " << endl;
            cout << "                                                                       ┌──────────────────────────── ⋆⋅☆⋅⋆ ──────────────────────────────┐                    " << endl;
            cout << "                                                                                                                    " << endl;
            cout << "                                                       ╒═══════════════════════════════════════════════════════════════════════════════════════════════╕       " << endl;
            cout << "                                                                                                                                      " << endl;
            cout << "                                                                               Congratulations! You've guessed the word: " << word << "!!" << endl;
            cout << "                                                                                                                            " << endl;
            cout << "                                                       ╘═══════════════════════════════════════════════════════════════════════════════════════════════╛        " << endl;
            cout << "                                                                                                                     " << endl;
            cout << "                                                                       └──────────────────────────── ⋆⋅☆⋅⋆ ──────────────────────────────┘                                             " << endl;

            // Ask player if they want to play again or return to menu
            cout << "                                                                                                                    " << endl;
            cout << "                                                                                                                    " << endl;
            cout << "                                                                                                                    " << endl;
            cout << "                                                         ╔══════════════════════════════════════════《✧ 》══════════════════════════════════════════╗ " << endl;
            cout << "                                                                                                                    " << endl;
            cout << "                                                                Would you like to play again? Enter 1 for Yes, 2 to return to the Hangman menu: ";
            cout << "                                                                                                                    " << endl;
            cout << "                                                         ╚══════════════════════════════════════════《✧ 》══════════════════════════════════════════╝ " << endl;
            int choice;
            cin >> choice;

            if (choice == 1) {
                playHangman(maxAttempts, wordList); // Restart the game
            } else if (choice == 2) {
                return; // Return to Hangman menu
            } 
        }
    }

    if (wrongAttempts == maxAttempts) {
    system("CLS");
    displayHangman(wrongAttempts);
    cout << "                                                                                                                            " << endl;
    cout << "                                                       ╒════════════════════════════════════════════════════════════════════════════════════════════════╕       " << endl;
    cout << "                                                                                                                    " << endl;
    cout << "                                                                                                                            " << endl;
    cout << "                                                                                You've been hanged! Better luck next time!" << endl;
    cout << "                                                                                                                            " << endl;
    cout << "                                                                                             The word was: " << word << endl; // Display the word
    cout << "                                                                                                                            " << endl;
    cout << "                                                                                                                      " << endl;
    cout << "                                                       ╘════════════════════════════════════════════════════════════════════════════════════════════════╛        " << endl;

    // Ask player if they want to play again or return to menu
    cout << "                                                          ╔══════════════════════════════════════════《✧ 》══════════════════════════════════════════╗ " << endl;
    cout << "                                                                                                                    " << endl;
    cout << "                                                               Would you like to play again? Enter 1 for Yes, 2 to return to the Hangman menu: ";
    cout << "                                                                                                                    " << endl;
    cout << "                                                          ╚══════════════════════════════════════════《✧ 》══════════════════════════════════════════╝ " << endl;
    int choice;
    cin >> choice;

    // Handle the player's choice
    if (choice == 1) {
        playHangman(maxAttempts, wordList); // Restart the game
    } else if (choice == 2) {
        return; // Return to Hangman menu
    } else {
        cout << "Invalid choice! Returning to Hangman menu." << endl;
        return; // Return to Hangman menu
    }
}
}

void mainMenuHangman() {
    while (true) {
        system("CLS");

        cout << "                                                                                                                                                               " << endl;
        cout << "                                                                                                                                                               " << endl;
        cout << "                                                                                                                                                               " << endl;
        cout << "                                                                                                                                                               " << endl;
        cout << "                                                                                                                                                               " << endl;
        cout << "                                                                                                                                                               " << endl;
        cout << "                                                                                                                                                               " << endl;
        cout << "                                                                                                                                                               " << endl;
        cout << "                                                                       \033[38;5;229m ██   ██  █████  ███    ██  ██████  ███    ███  █████  ███    ██ \033[0m                                  " << endl;
        cout << "                                                                       \033[38;5;226m ██   ██ ██   ██ ████   ██ ██       ████  ████ ██   ██ ████   ██  \033[0m                                 " << endl;
        cout << "                                                                       \033[38;5;220m ███████ ███████ ██ ██  ██ ██   ███ ██ ████ ██ ███████ ██ ██  ██  \033[0m                                 " << endl;
        cout << "                                                                 \033[38;5;208m       ██   ██ ██   ██ ██  ██ ██ ██    ██ ██  ██  ██ ██   ██ ██  ██ ██  \033[0m                                 " << endl;
        cout << "                                                                   \033[38;5;202m     ██   ██ ██   ██ ██   ████  ██████  ██      ██ ██   ██ ██   ████  \033[0m                                 " << endl;
        cout << "                                                                                                                                                             " << endl;
        cout << "                                            \033[38;5;226m ╚════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════╝" << endl;
        cout << "                                                                                                                                                   " << endl;
        cout << "                                                                                                                                                   " << endl;
        cout << "                                                                       \033[38;5;226m  ╔════════════════════════════《✧ 》════════════════════════════╗ \033[0m                                                          " << endl;
        cout << "                                                                                                                                                    " << endl;
        cout << "                                                                               \033[38;5;208m  WELCOME TO HANGMAN! CHOOSE ONE OF THE FOLLOWING:\033[0m                                          " << endl;
        cout << "                                                                                                                                                     " << endl;
        cout << "                                                                                                                                                   " << endl;
        cout << "                                                                                                                                                   " << endl;
        cout << "                                                                                                   \033[38;5;208m 1. PLAY    \033[0m                                                            " << endl;
        cout << "                                                                                        \033[38;5;226m       __________________ \033[0m                                                                         " << endl;
        cout << "                                                                                                                                                   " << endl;
        cout << "                                                                                               \033[38;5;208m    2. RULES       \033[0m                                                        " << endl;
        cout << "                                                                                      \033[38;5;226m      ________________________  \033[0m                                                                           " << endl;
        cout << "                                                                                                                                                                     " << endl;
        cout << "                                                                                          \033[38;5;208m  3. BACK TO GAME SELECTION \033[0m                                                        " << endl;
        cout << "                                                                                                                                                   " << endl;
        cout << "                                                                                                                                                   " << endl;
        cout << "                                                                                                                                                   " << endl;
        cout << "                                                                      \033[38;5;226m  ╚═════════════════════════════《✧ 》═════════════════════════════╝\033[0m                                                              " << endl;
        cout << "                                                                                                                                                   " << endl;
        cout << "                                                                                                                                                   " << endl;
        cout << "                                                                                                                                                   " << endl;
        cout << "                                                                                                                                                   " << endl;
        cout << "                                                                                                                                                   " << endl;
        cout << "                                                                                                                                                   " << endl;
        cout << "                                                                                                                                                   " << endl;
        cout << "                                                                                                                                                   " << endl;
        


        int mainChoice;
        cin >> mainChoice;

        srand(static_cast<unsigned int>(time(0)));

        if (mainChoice == 1) {
            while (true) {
                system("CLS");
                cout << "                                                                                                                                                                " << endl;
                cout << "                                                                                                                                                                " << endl;
                cout << "                                                                                                                                                                " << endl;
                cout << "                                                                                                                                                                " << endl;
                cout << "                                                                                                                                                                " << endl;
                cout << "                                                                                                                                                                " << endl;
                cout << "                                                                                                                                                                " << endl;
                cout << "                                                                                                                                                                " << endl;
                cout << "                                                                                                                                                                " << endl;
                cout << "                                                                           ╔════════════════════════════《✧ 》═══════════════════════════╗                       " << endl;
                cout << "                                                                                                                                                                " << endl;
                cout << "                                                         ╒═══════════════════════════════════════════════════════════════════════════════════════════════╕      " << endl;
                cout << "                                                                                                                                                                " << endl;
                cout << "                                                                                        CHOOSE DIFFICULTY LEVEL FOR HANGMAN:                                    " << endl;
                cout << "                                                                                                                                                                " << endl;
                cout << "                                                                                                                                                                " << endl;
                cout << "                                                                                                                                                                " << endl;
                cout << "                                                                                         1. Easy (8 attempts, max 6 letters)                                    " << endl;
                cout << "                                                                                     __________________________________________                                 " << endl;
                cout << "                                                                                                                                                                " << endl;
                cout << "                                                                                        2. Medium (7 attempts, max 9 letters)                                   " << endl;
                cout << "                                                                                    ____________________________________________                                " << endl;
                cout << "                                                                                                                                                                " << endl;
                cout << "                                                                                        3. Hard (6 attempts, max 12 letters)                                    " << endl;
                cout << "                                                                                        ____________________________________                                    " << endl;
                cout << "                                                                                                                                                                " << endl;
                cout << "                                                                                               4. Back to Hangman Menu                                          " << endl;
                cout << "                                                                                                                                                                " << endl;
                cout << "                                                                                                                                                                " << endl;
                cout << "                                                         ╘═══════════════════════════════════════════════════════════════════════════════════════════════╛      " << endl;
                cout << "                                                                                                                                                                " << endl;
                cout << "                                                                           ╚═══════════════════════════《✧ 》════════════════════════════╝                       " << endl;

                int choiceHangman;
                cin >> choiceHangman;
                system("CLS");

                if (choiceHangman == 1) {
                    vector<string> easyWords = {"apple", "banana", "grape", "peach", "berry", "table", "badge", "oil", "pencil", "pen", "phone"};
                    playHangman(8, easyWords);
                } else if (choiceHangman == 2) {
                    vector<string> mediumWords = {"computer", "hangman", "keyboard","programming", "development"};
                    playHangman(7, mediumWords);
                } else if (choiceHangman == 3) {
                    vector<string> hardWords = {"extraordinary", "unbelievable", "discombobulate", "incomprehensible"};
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
                system("CLS");

            cout << "                                                                                                                                                    " << endl;
            cout << "                                                                                                                                                    " << endl;
            cout << "                                                                                                                                                    " << endl;
            cout << "                                                                                                                                                     " << endl;
            cout << "                                                                                                                                                    " << endl;
            cout << "                                                                                                                                                    " << endl;
            cout << "                                                                                                                                                    " << endl;
            cout << "                                                                                                                                                    " << endl;
            cout << "                                                                 \033[38;5;34m     ┌──────────────────────────── ⋆⋅☆⋅⋆ ──────────────────────────────┐  \033[0m                    " << endl;
            cout << "                                                                                                                                                    " << endl;
            cout << "                                                \033[38;5;36m    ╒═══════════════════════════════════════════════════════════════════════════════════════════════╕  \033[0m       " << endl;
            cout << "                                                                                                                                                    " << endl;
            cout << "                                                                                       \033[38;5;46m    RULES OF HANGMAN:  \033[0m                                               " << endl;
            cout << "                                                                                                                                                     " << endl;
            cout << "                                                                      \033[38;5;48m    1. You have a limited number of incorrect guesses.  \033[0m                              " << endl;
            cout << "                                                                                                                                                    " << endl;
            cout << "                                                           \033[38;5;50m    2. Each time you guess a letter that is not in the word, you lose a chance.  \033[0m                 " << endl;
            cout << "                                                                                                                                                     " << endl;
            cout << "                                                             \033[38;5;58m    3. The game ends when you either guess the word or run out of chances.  \033[0m                    " << endl;
            cout << "                                                                                                                                                     " << endl;
            cout << "                                                                                \033[38;5;64m    Press 0 to return to the main menu.  \033[0m                                    " << endl;
            cout << "                                                                                                                                                     " << endl;
            cout << "                                                                                                                                                     " << endl;
            cout << "                                                                                             \033[38;5;70m     __________  \033[0m                                                            " << endl;
            cout << "                                                                                             \033[38;5;76m    |          |  \033[0m                                             " << endl;
            cout << "                                                                                             \033[38;5;220m   |          |  \033[0m                                             " << endl;
            cout << "                                                                                             \033[38;5;226m   |          0  \033[0m                                            " << endl;
            cout << "                                                                                       \033[38;5;214m   ______|______   /|\\  \033[0m                                            " << endl;
            cout << "                                                                                     \033[38;5;190m   /       |     /|  /|\\  \033[0m                                            " << endl;
            cout << "                                                                                    \033[38;5;184m   /             / |  \033[0m                                              " << endl;
            cout << "                                                                                   \033[38;5;178m   /_____________/  |  \033[0m                                              " << endl;
            cout << "                                                                                  \033[38;5;154m    |             | /  \033[0m                                             " << endl;
            cout << "                                                                                  \033[38;5;142m    |_____________|/  \033[0m                                               " << endl;
            cout << "                                                                                                                                                     " << endl;
            cout << "                                                                                                                                                     " << endl;
            cout << "                                                                                                                                                     " << endl;
            cout << "                                                \033[38;5;34m    ╘═══════════════════════════════════════════════════════════════════════════════════════════════╛  \033[0m        " << endl;
            cout << "                                                                                                                                     " << endl;
            cout << "                                                                 \033[38;5;36m    └──────────────────────────── ⋆⋅☆⋅⋆ ──────────────────────────────┘  \033[0m                                             " << endl;
                

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
            cout << "                                                     ┌──────────────────────────── ⋆⋅☆⋅⋆ ──────────────────────────────┐                    " << endl;
            cout << "                                                                  !!!Invalid choice. Please try again!!!                                " << endl;
            cout << "                                                     └──────────────────────────── ⋆⋅☆⋅⋆ ──────────────────────────────┘               " << endl;
        }
    }
}


void playWordle(int attempts) {
    vector<string> wordList = { "apple", "grape", "peach", "berry", "table", "badge" };
    srand(time(0));  // seed for random number generation

    // Pick a random word from the list
    string secretWord = wordList[rand() % wordList.size()];
    string guess;
    system("CLS");
    cout << "                                                                                                                                                     " << endl;
    cout << "                                                                                                                                                     " << endl;
    cout << "                                                                                                                                                     " << endl;
    cout << "                                                                                                                                                     " << endl;
    cout << "                                                                                                                                                     " << endl;
    cout << "                                                                                                                                                     " << endl;
    cout << "                                                                                                                                                     " << endl;
    cout << "                                                                                                                                                     " << endl;
    cout << "                                                                                                                                                     " << endl;
    cout << "                                                         ╒═══════════════════════════════════════════════════════════════════════════════════════════════╕       " << endl;
    cout << "                                                                                                                                                     " << endl;
    cout << "                                                                                                                                                     " << endl;
    cout << "                                                                        ╔══════════════════════════════《✧ 》══════════════════════════════╗   " << endl;
    cout << "                                                                                                                                                     " << endl;
    cout << "                                                                                 Guess the 5-letter word. You have " << attempts << " attempts." << endl;
    cout << "                                                                                                                                                     " << endl;
    cout << "                                                                        ╚══════════════════════════════《✧ 》══════════════════════════════╝" << endl;
    cout << "                                                                                                                                                     " << endl;
    cout << "                                                                                                                                                     " << endl;
    cout << "                                                         ╘═══════════════════════════════════════════════════════════════════════════════════════════════╛" << endl;
    cout << "                                                                                                                                                     " << endl;

    // Main game loop
    while (attempts > 0) {
        cout << "                                                                                                      ";
        cin >> guess;

        // Check the guess if it's a valid 5-letter word
        if (guess.length() != 5) {
            cout << "                                                                                                                                                     " << endl;
            cout << "                                                                              ┌─────────────────────── ⋆⋅☆⋅⋆ ────────────────────────┐ " << endl;
            cout << "                                                                                         Please enter a 5-letter word!" << endl;
            cout << "                                                                              └─────────────────────── ⋆⋅☆⋅⋆ ────────────────────────┘               " << endl;
            cout << "                                                                                                                                                     " << endl;
            cout << "                                                                                                                                                     " << endl;
            continue;
        }

        if (guess == secretWord) {
            cout << "Congratulations! You've guessed the word correctly!" << endl;
            break;
        } else {
            // provide feedback on the guess
            cout << "                                                                                                     "; 
            for (int i = 0; i < 5; i++) {
                if (guess[i] == secretWord[i]) {
                    cout << guess[i] << " ";  // Indicate correct letter in the correct place
                } else if (secretWord.find(guess[i]) != string::npos) {
                    cout << "* ";  // Indicate correct letter, wrong place
                } else {
                    cout << "_ ";  // Indicate incorrect letter
                }
            }
            cout << endl; // Move to the next line after feedback

            attempts--;
            cout << "                                                                                                                                        " << endl;
            cout << "                                                                                         ╔═════════════════════════════════╗" << endl;
            cout << "                                                                                              You have " << attempts << " attempts left." << endl;
            cout << "                                                                                         ╘═════════════════════════════════╛" << endl;
            cout << "                                                                                                                                        " << endl;

            if (attempts == 0) {
                system("CLS");
                cout << "                                                                                                                                        " << endl;
                cout << "                                                                                                                                        " << endl;
                cout << "                                                                                                                                        " << endl;
                cout << "                                                                                                                                        " << endl;
                cout << "                                                                                                                                        " << endl;
                cout << "                                                                                                                                        " << endl;
                cout << "                                                                                                                                        " << endl;
                cout << "                                                                                                                                        " << endl;
                cout << "                                                                                                                                        " << endl;
                cout << "                                                                                                                                        " << endl;
                cout << "                                                     ╒═════════════════════════════════════════════════════════════════════════════════════════════════════════════════╕" << endl;
                cout << "                                                                                                                                        " << endl;
                cout << "                                                            ╔═══════════════════════════════════════════════《✧ 》══════════════════════════════════════════════╗" << endl;
                cout << "                                                                                                                                        " << endl;
                cout << "                                                                                         Game over! The correct word was: " << secretWord << endl;
                cout << "                                                                                                                                        " << endl;
                cout << "                                                                     Would you like to play again? Enter 1 for Yes, 2 to go back to the Wordle menu: ";
                cout << "                                                                                                                                        " << endl;
                cout << "                                                            ╚═══════════════════════════════════════════════《✧ 》══════════════════════════════════════════════╝ " << endl;
                cout << "                                                                                                                                        " << endl;
                cout << "                                                     ╘═════════════════════════════════════════════════════════════════════════════════════════════════════════════════╛" << endl;
                int choice;
                cin >> choice;
                if (choice == 1) {
                    playWordle(6); // Restart the game with 6 attempts
                } else if (choice == 2) {
                    return; // Go back to the Wordle menu
                } else {
                    cout << "Invalid choice! Returning to the Wordle menu." << endl;
                    return; // Go back to the Wordle menu
                }
            }
        }
    }
}

void wordleDifficultyMenu() {
    while (true) {
        system("CLS");
    cout << "                                                                                                                                                               " << endl;
    cout << "                                                                                                                                                               " << endl;
    cout << "                                                                                                                                                               " << endl;
    cout << "                                                                                                                                                               " << endl;
    cout << "                                                                                                                                                               " << endl;
    cout << "                                                                                                                                                               " << endl;
    cout << "                                                                                                                                                               " << endl;
    cout << "                                                                                                                                                               " << endl;
    cout << "                                                                                                                                                               " << endl;
    cout << "                                                                                                                                                               " << endl;
    cout << "                                                                                                                                                               " << endl;
    cout << "                                                                            ╔═════════════════════════════《✧ 》════════════════════════════╗                                         " << endl;
    cout << "                                                                                                                                                                      " << endl;
    cout << "                                                          ╒═════════════════════════════════════════════════════════════════════════════════════════════════╕                      " << endl;
    cout << "                                                                                                                                                                      " << endl;
    cout << "                                                                                          CHOOSE DIFFICULTY LEVEL FOR WORDLE" << endl;
    cout << "                                                                                                                                                                      " << endl;
    cout << "                                                                                                                                                                      " << endl;
    cout << "                                                                                                  1. Easy (6 attempts)" << endl;
    cout << "                                                                                              ___________________________                                                     " << endl;
    cout << "                                                                                                                                                                      " << endl;
    cout << "                                                                                                 2. Medium (5 attempts)" << endl;
    cout << "                                                                                             _____________________________                                                           " << endl;
    cout << "                                                                                                                                                                      " << endl;
    cout << "                                                                                                 3. Hard (4 attempts)" << endl;
    cout << "                                                                                              ___________________________                                                           " << endl;
    cout << "                                                                                                                                                                      " << endl;
    cout << "                                                                                             4. Back to Word Scramble Menu" << endl;
    cout << "                                                                                                                                                                      " << endl;
    cout << "                                                                                                                                                                      " << endl;
    cout << "                                                          ╘═════════════════════════════════════════════════════════════════════════════════════════════════╛                      " << endl;
    cout << "                                                                                                                                                                      " << endl;
    cout << "                                                                            ╚════════════════════════════《✧ 》═════════════════════════════╝                                     " << endl;
    cout << "                                                                                                                                                               " << endl;
        cout << "                                                                                                                                                               " << endl;
        cout << "                                                                                                                                                               " << endl;
        cout << "                                                                                                                                                               " << endl;
        cout << "                                                                                                                                                               " << endl;


        int choice;
        cin >> choice;

        if (choice == 1) {
            playWordle(6); // Call playWordle with 6 attempts
        } else if (choice == 2) {
            playWordle(5); // Call playWordle with 5 attempts
        } else if (choice == 3) {
            playWordle(4); // Call playWordle with 4 attempts
        } else if (choice == 4) {
            return; // Back to Wordle menu
        } else {
            cout << "Invalid choice! Please select again." << endl;
        }
    }
}

void wordleMenu() {
    while (true) {
        system("CLS");
        cout << "                                                                                                                                                               " << endl;
        cout << "                                                                                                                                                               " << endl;
        cout << "                                                                                                                                                               " << endl;
        cout << "                                                                                                                                                               " << endl;
        cout << "                                                                                                                                                                      " << endl;
        cout << "                                                                                                                                                                      " << endl;
        cout << "                                                                                                                                                                      " << endl;
        cout << "                                                                                                                                                               " << endl;
        cout << "                                                                          \033[38;5;120m       ██     ██  ██████  ██████  ██████  ██      ███████ \033[0m                                   " << endl;
        cout << "                                                                          \033[38;5;34m       ██     ██ ██    ██ ██   ██ ██   ██ ██      ██    \033[0m                                     " << endl;
        cout << "                                                                          \033[38;5;30m       ██  █  ██ ██    ██ ██████  ██   ██ ██      █████  \033[0m                                    " << endl;
        cout << "                                                                           \033[38;5;38m      ██ ███ ██ ██    ██ ██   ██ ██   ██ ██      ██      \033[0m                                   " << endl;
        cout << "                                                                           \033[38;5;25m       ███ ███   ██████  ██   ██ ██████  ███████ ███████ \033[0m                                   " << endl;
        cout << "                                                                                                                                                               " << endl;
        cout << "                                                   \033[38;5;25m╚══════════════════════════════════════════════════════════════════════════════════════════════════════════╝\033[0m       " << endl;
        cout << "                                                                                                                                                               " << endl;
        cout << "                                                                                                                                                               " << endl;
        cout << "                                                                                                                                                               " << endl;
        cout << "                                                                                                                                                               " << endl;
        cout << "                                                                \033[38;5;25m  ╔═══════════════════════════════════《✧ 》════════════════════════════════════╗ \033[0m                    " << endl;
        cout << "                                                                                                                                                               " << endl;
        cout << "                                                                                \033[38;5;120m WELCOME TO WORDLE! CHOOSE ONE OF THE FOLLOWING    \033[0m                                   " << endl;
        cout << "                                                                                                                                                               " << endl;
        cout << "                                                                                                                                                               " << endl;
        cout << "                                                                                                                                                               " << endl;
        cout << "                                                                                      \033[38;5;120m                1. Play   \033[0m                                                        " << endl;
        cout << "                                                                                          \033[38;5;25m      ____________________ \033[0m                                                  " << endl;
        cout << "                                                                                                                                                               " << endl;
        cout << "                                                                                      \033[38;5;120m            2. View Rules      \033[0m                                                  " << endl;
        cout << "                                                                                     \033[38;5;25m       ____________________________  \033[0m                                             " << endl;
        cout << "                                                                                                                                                               " << endl;
        cout << "                                                                                   \033[38;5;120m          3. Back to Game Selection  \033[0m                                               " << endl;
        cout << "                                                                                                                                                               " << endl;
        cout << "                                                                                                                                                               " << endl;
        cout << "                                                                                                                                                               " << endl;
        cout << "                                                                \033[38;5;25m  ╚════════════════════════════════════《✧ 》════════════════════════════════════╝\033[0m                     " << endl;
        cout << "                                                                                                                                                                " << endl;
        cout << "                                                                                                                                                               " << endl;
        cout << "                                                                                                                                                               " << endl;
        cout << "                                                                                                                                                               " << endl;
        cout << "                                                                                                                                                               " << endl;
        cout << "                                                                                                                                                               " << endl;
      
        

        int choice;
        cin >> choice;

        if (choice == 1) {
            wordleDifficultyMenu(); // Go to difficulty selection
        } else if (choice == 2) {
            system("CLS");
            cout << "                                                                                                                                                                    " << endl;
            cout << "                                                                                                                                                                    " << endl;
            cout << "                                                                                                                                                                    " << endl;
            cout << "                                                                                                                                                                    " << endl;
            cout << "                                                                                                                                                                    " << endl;
            cout << "                                                                                                                                                                    " << endl;
            cout << "                                                                                                                                                                    " << endl;
            cout << "                                                                         ┌──────────────────────────── ⋆⋅☆⋅⋆ ──────────────────────────────┐                               " << endl;
            cout << "                                                                                                                                                                    " << endl;
            cout << "                                                         ╒═══════════════════════════════════════════════════════════════════════════════════════════════╕                " << endl;
            cout << "                                                                                                                                                                    " << endl;
            cout << "                                                                                                RULES OF WORDLE                                                           " << endl;
             cout << "                                                                                                                                                                   " << endl;
            cout << "                                                                                                                                                                    " << endl;
            cout << "                                                                                                                                                                    " << endl;
            cout << "                                                                                        1. Guess the 5-letter word.                                                       " << endl;
            cout << "                                                                                                                                                                    " << endl;
            cout << "                                                                        2. You have a limited number of attempts based on difficulty.                                       " << endl;
            cout << "                                                                                                                                                                    " << endl;
            cout << "                                                                      3. Correct letters in the correct position will be shown as it is.                                   " << endl;
            cout << "                                                                                                                                                                    " << endl;
            cout << "                                                                      4. Correct letters in the wrong position will be indicated with '*'                                  " << endl;
            cout << "                                                                                                                                                                    " << endl;
            cout << "                                                                                  5. Incorrect letters will be shown as '_'.                                               " << endl;
            cout << "                                                                                                                                                                    " << endl;
            cout << "                                                                                                                                                                    " << endl;
            cout << "                                                                                                                                                                    " << endl;
            cout << "                                                                                     Press 0 to return to the Wordle menu.                                                 " << endl;
            cout << "                                                                                                                                                                    " << endl;
            cout << "                                                                                                                                                                    " << endl;
            cout << "                                                                                           black ---> _ * a c _                                                           " << endl;
            cout << "                                                                                           cross ---> * _ _ _ _                                                            " << endl;
            cout << "                                                                              EXAMPLE:     apple ---> * * * _ *                                                            " << endl;
            cout << "                                                                                           reach ---> _ e a c h                                                           " << endl;
            cout << "                                                                                           peach ---> p e a c h (Correct word)                                            " << endl;
            cout << "                                                                                                                                                                    " << endl;
            cout << "                                                                                                                                                                    " << endl;
            cout << "                                                         ╘═══════════════════════════════════════════════════════════════════════════════════════════════╛                " << endl;
            cout << "                                                                                                                                                                    " << endl;
            cout << "                                                                        └───────────────────────────── ⋆⋅☆⋅⋆ ─────────────────────────────┘                                " << endl;
            cout << "                                                                                                                                                                    " << endl;
            cout << "                                                                                                                                                                    " << endl;
            cout << "                                                                                                                                                                    " << endl;
            cout << "                                                                                                                                                                    " << endl;
            cout << "                                                                                                                                                                    " << endl;
            cout << "                                                                                                                                                                    " << endl;

            int returnToMenu;
            cin >> returnToMenu;
            if (returnToMenu == 0) {
                continue; // Return to Wordle menu
            }
        } else if (choice == 3) {
            return; // Back to game selection menu
        } else {
            cout << "Invalid choice! Please select again." << endl;
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
    system("CLS");
    cout << "                                                                                                                                                                      " << endl;
    cout << "                                                                                                                                                                      " << endl;
    cout << "                                                                                                                                                                      " << endl;
    cout << "                                                                                                                                                                      " << endl;
    cout << "                                                                                                                                                                      " << endl;
    cout << "                                                                                                                                                                      " << endl;
    cout << "                                                                                                                                                                      " << endl;
    cout << "                                                          ╒═══════════════════════════════════════════════════════════════════════════════════════════════╕              " << endl;
    cout << "                                                                                                                                                                      " << endl;
    cout << "                                                                        ┌───────────────────────────── ⋆⋅☆⋅⋆ ─────────────────────────────┐                                      " << endl;
    cout << "                                                                                                                                                                      " << endl;
    cout << "                                                                                                                                                                        " << endl;
    cout << "                                                                                            Guess the word: " << scrambledWord << endl;
    cout << "                                                                                                                                                                      " << endl;
    cout << "                                                                                                                                                                    " << endl;
    cout << "                                                                        └───────────────────────────── ⋆⋅☆⋅⋆ ─────────────────────────────┘                                       " << endl;
    cout << "                                                                                                                                                                      " << endl;
    cout << "                                                          ╘═══════════════════════════════════════════════════════════════════════════════════════════════╛         " << endl;

    while (attempts > 0) {
        
        cout << "                                                                                                                                                                      " << endl;
        cout << "                                                                                                                                                                      " << endl;
        cout << "                                                                           ╔═══════════════════════════《✧ 》════════════════════════════╗                                             " << endl;
        cout << "                                                                                                                                                                      " << endl;
        cout << "                                                                                             You have " << attempts << " attempts left.";
        cout << "                                                                                                                                                                      " << endl;
        cout << "                                                                           ╚═══════════════════════════《✧ 》════════════════════════════╝                                                         " << endl;
        cout << "                                                                                                                                                                      " << endl;
        cout << "                                                                                                        ";
        cin >> guess;

        if (guess == word) {
            system("CLS");
            cout << "                                                                                                                                                                      " << endl;
            cout << "                                                                                                                                                                      " << endl;
            cout << "                                                                                                                                                                      " << endl;
            cout << "                                                                                                                                                                      " << endl;
            cout << "                                                                                                                                                                      " << endl;
            cout << "                                                                                                                                                                      " << endl;
            cout << "                                          ╒═══════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════╕              " << endl;
            cout << "                                                                                                                                                                      " << endl;
            cout << "                                                                                                                                                                      " << endl;
            cout << "                                                                        ╔═══════════════════════════════《✧ 》════════════════════════════════╗                                             " << endl;
            cout << "                                                                                                                                                                      " << endl;
            cout << "                                                                                    Congratulations! You've guessed the word: " << word << "!" << endl;
            cout << "                                                                                                                                                                      " << endl;
            cout << "                                                                        ╚═══════════════════════════════《✧ 》════════════════════════════════╝                                            " << endl;
            cout << "                                                                                                                                                                      " << endl;

            // Ask the player if they want to play again or return to the menu
            cout << "                                                                                                                                                                      " << endl;
            cout << "                                                            ╒═══════════════════════════════════════════════════════════════════════════════════════════════╕              " << endl;
            cout << "                                                                                                                                                                      " << endl;
            cout << "                                                                 Would you like to play again? Enter 1 for Yes, 2 to return to the Word Scramble menu: ";
            cout << "                                                                                                                                                                      " << endl;
            cout << "                                                            ╘═══════════════════════════════════════════════════════════════════════════════════════════════╛         " << endl;
            cout << "                                                                                                                                                                      " << endl;
            cout << "                                                                                                                                                                      " << endl;
            cout << "                                                                                                                                                                      " << endl;
            cout << "                                           ╘══════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════╛" << endl;
            int choice;
            cin >> choice;

            if (choice == 1) {
                playWordGuesser(difficulty); // Restart the game with the same difficulty
            } else if (choice == 2) {
                return; // Go back to the Word Scramble menu
            } else {
                cout << "Invalid choice! Returning to the Word Scramble menu." << endl;
                return; // Go back to the Word Scramble menu
            }
            return; // Exit the function after handling the choice
        }
        else {
            attempts--;
            cout << "                                                                                                                                                                      " << endl;
            cout << "                                                                                           ╔═══════════════════════════╗                                                              " << endl;
            cout << "                                                                                              Wrong guess. Try again." << endl;
            cout << "                                                                                           ╘═══════════════════════════╛                                                                          " << endl;

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
        system("CLS");
        cout << "                                                                                                                                                                      " << endl;
        cout << "                                                                                                                                                                      " << endl;
        cout << "                                                                                                                                                                      " << endl;
        cout << "                                                                                                                                                                      " << endl;
        cout << "                                                                                                                                                                      " << endl;
        cout << "                                                                                                                                                                      " << endl;
        cout << "                                                                                                                                                                      " << endl;
        cout << "                                                    ██     ██  ██████  ██████  ██████      ███████  ██████ ██████   █████  ███    ███ ██████  ██      ███████\033[0m          " << endl;
        cout << "                                                    ██     ██ ██    ██ ██   ██ ██   ██     ██      ██      ██   ██ ██   ██ ████  ████ ██   ██ ██      ██  \033[0m             " << endl;
        cout << "                                                    ██  █  ██ ██    ██ ██████  ██   ██     ███████ ██      ██████  ███████ ██ ████ ██ ██████  ██      █████ \033[0m           " << endl;
        cout << "                                                    ██ ███ ██ ██    ██ ██   ██ ██   ██          ██ ██      ██   ██ ██   ██ ██  ██  ██ ██   ██ ██      ██    \033[0m           " << endl;
        cout << "                                                     ███ ███   ██████  ██   ██ ██████      ███████  ██████ ██   ██ ██   ██ ██      ██ ██████  ███████ ███████ \033[0m         " << endl;
        cout << "                                                                                                                                                                      " << endl;
        cout << "                                       ╚══════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════╝\033[0m  " << endl;
        cout << "                                                                                                                                                                      " << endl;
        cout << "                                                                ╔═══════════════════════════════════《✧ 》════════════════════════════════════╗  \033[0m                       " << endl;
        cout << "                                                                                                                                                                      " << endl;
        cout << "                                                                             WELCOME TO WORD SCRAMBLE! CHOOSE ONE OF THE FOLLOWING: \033[0m                                   " << endl;
        cout << "                                                                                                                                                                      " << endl;
        cout << "                                                                                                                                                                      " << endl;
        cout << "                                                                                                                                                                      " << endl;
        cout << "                                                                                              1. Play the game\033[0m                                                         " << endl;
        cout << "                                                                                           __________________________  \033[0m                                                " << endl;
        cout << "                                                                                                                                                                      " << endl;
        cout << "                                                                                                2. View rules  \033[0m                                                        " << endl;
        cout << "                                                                                         ______________________________  \033[0m                                              " << endl;
        cout << "                                                                                                                                                                      " << endl;
        cout << "                                                                                            3. Back to Game Selection \033[0m                                                 " << endl;
        cout << "                                                                                                                                                                      " << endl;
        cout << "                                                                                                                                                                      " << endl;
        cout << "                                                                ╚════════════════════════════════════《✧ 》═══════════════════════════════════╝  \033[0m                       " << endl;
        cout << "                                                                                                                                                                      " << endl;
        cout << "                                                                                                                                                                      " << endl;
        cout << "                                                                                                                                                                      " << endl;
        cout << "                                                                                                                                                                      " << endl;

        int choice;
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
    system("CLS");
    cout << "                                                                                                                                                          " << endl;
     cout << "                                                                                                                                                          " << endl;
    cout << "                                                                                                                                                          " << endl;
    cout << "                                                                                                                                                          " << endl;
    cout << "                                                                                                                                                          " << endl;
    cout << "                                                                                                                                                          " << endl;
    cout << "                                                                                                                                                          " << endl;
    cout << "                                                                                                                                                          " << endl;
    cout << "                                                                                                                                                          " << endl;
    cout << "                                                                             ┌──────────────────────────── ⋆⋅☆⋅⋆ ──────────────────────────────┐               " << endl;
    cout << "                                                                                                                                                           " << endl;
    cout << "                                                                                                                                                           " << endl;
    cout << "                                                             ╒═══════════════════════════════════════════════════════════════════════════════════════════════╕  " << endl;
    cout << "                                                                                                                                                          " << endl;
    cout << "                                                                                                                                                          " << endl;
    cout << "                                                                                                  RULES OF WORD SCRAMBLE:                                     " << endl;
    cout << "                                                                                                                                                          " << endl;
    cout << "                                                                                                                                                          " << endl;
    cout << "                                                                                     1. You will be given a scrambled word to guess.                           " << endl;
    cout << "                                                                                                                                                          " << endl;
    cout << "                                                                       2. You have a limited number of incorrect guesses based on difficulty.                  " << endl;
    cout << "                                                                                                                                                          " << endl;
    cout << "                                                                          3. The game ends when you guess the word or run out of attempts.                     " << endl;
    cout << "                                                                                                                                                          " << endl;
    cout << "                                                                                     Press 0 to return to the Word Scramble menu.                              " << endl;
    cout << "                                                                                                                                                          " << endl;
    cout << "                                                                                                                                                          " << endl;
    cout << "                                                                                                                                                          " << endl;
    cout << "                                                                                       EXAMPLE:  f o n a e t o r n  --->  afternoon                         " << endl;
    cout << "                                                                                                                                                          " << endl;
    cout << "                                                                                                                                                              " << endl;
    cout << "                                                             ╘═══════════════════════════════════════════════════════════════════════════════════════════════╛  " << endl;
    cout << "                                                                                                                                                          " << endl;
    cout << "                                                                                                                                                          " << endl;
    cout << "                                                                            └───────────────────────────── ⋆⋅☆⋅⋆ ─────────────────────────────┘                " << endl;
    cout << "                                                                                                                                                          " << endl;
    cout << "                                                                                                                                                          " << endl;
}

void WordScrambleDifficulty() {
    system("CLS");
    int choiceWordScramble;
    cout << "                                                                                                                                                                      " << endl;
    cout << "                                                                                                                                                                      " << endl;
    cout << "                                                                                                                                                                      " << endl;
    cout << "                                                                                                                                                                      " << endl;
    cout << "                                                                                                                                                                      " << endl;
    cout << "                                                                                                                                                                      " << endl;
    cout << "                                                                                                                                                                      " << endl;
    cout << "                                                                                                                                                                      " << endl;
    cout << "                                                                                                                                                                      " << endl;
    cout << "                                                                                                                                                                      " << endl;
    cout << "                                                                                                                                                                      " << endl;
    cout << "                                                                                                                                                                      " << endl;
    cout << "                                                                              ╔════════════════════════════《✧ 》═══════════════════════════╗                                         " << endl;
    cout << "                                                                                                                                                                      " << endl;
    cout << "                                                             ╒═══════════════════════════════════════════════════════════════════════════════════════════════╕                      " << endl;
    cout << "                                                                                                                                                                      " << endl;
    cout << "                                                                                                 CHOOSE DIFFICULTY LEVEL" << endl;
    cout << "                                                                                                                                                                      " << endl;
    cout << "                                                                                                                                                                      " << endl;
    cout << "                                                                                                    1. Easy (5 attempts)" << endl;
    cout << "                                                                                                ___________________________                                                     " << endl;
    cout << "                                                                                                                                                                      " << endl;
    cout << "                                                                                                   2. Medium (4 attempts)" << endl;
    cout << "                                                                                               _____________________________                                                           " << endl;
    cout << "                                                                                                                                                                      " << endl;
    cout << "                                                                                                   3. Hard (3 attempts)" << endl;
    cout << "                                                                                                ___________________________                                                           " << endl;
    cout << "                                                                                                                                                                      " << endl;
    cout << "                                                                                               4. Back to Word Scramble Menu" << endl;
    cout << "                                                                                                                                                                      " << endl;
    cout << "                                                                                                                                                                      " << endl;
    cout << "                                                             ╘═══════════════════════════════════════════════════════════════════════════════════════════════╛                      " << endl;
    cout << "                                                                                                                                                                      " << endl;
    cout << "                                                                               ╚═══════════════════════════《✧ 》════════════════════════════╝                                     " << endl;
    cout << "                                                                                                                                                                      " << endl;
    cout << "                                                                                                                                                                      " << endl;
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
        system("CLS");
        cout << "                                                \033[34m╒═══════════════════════════════════════════════════════════════════════════════════════════════════════════╕\033[0m" << endl;
        cout << "                                                                                                                                                                                  " << endl;
        cout << "                                                                  \033[31m██████  ██████  ██████  ███████ ███████  ██████  ██████   ██████  ███████\033[0m                        " << endl;
        cout << "                                                                  \033[91m██     ██    ██ ██   ██ ██      ██      ██    ██ ██   ██ ██       ██\033[0m                             " << endl;
        cout << "                                                                  \033[38;5;202m██     ██    ██ ██   ██ █████   █████   ██    ██ ██████  ██   ███ █████\033[0m                    " << endl;
        cout << "                                                                  \033[38;5;214m██     ██    ██ ██   ██ ██      ██      ██    ██ ██   ██ ██    ██ ██\033[0m                       " << endl;
        cout << "                                                                  \033[33m██████  ██████  ██████  ███████ ██       ██████  ██   ██  ██████  ███████\033[0m                        " << endl;
        cout << "                                                                                                                                                                                  " << endl;
        cout << "                                                \033[34m╘═══════════════════════════════════════════════════════════════════════════════════════════════════════════╛                     " << endl;
        cout << "                                                                                                                                                                                  " << endl;
        cout << "                                                                          \033[34m┌────────────────────────── ⋆⋅☆⋅⋆ ──────────────────────────┐\033[0m                                           " << endl;
        cout << "                                                                                                                                                                                  " << endl;
        cout << "                                                                                              \033[38;5;214mWELCOME TO CODEFORGE!\033[0m                                                               " << endl;
        cout << "                                                                                                                                                                                  " << endl;
        cout << "                                                                                        \033[38;5;214m  Choose one of the following:\033[0m                                                            " << endl;
        cout << "                                                                                                                                                                                  " << endl;
        cout << "                                                                          \033[34m└────────────────────────── ⋆⋅☆⋅⋆ ──────────────────────────┘\033[0m                                            " << endl;
        cout << "                                                                                                                                                                                  " << endl;
        cout << "                                                                                                                                                                                  " << endl;
        cout << "                                                                                      \033[34m╔═══════════════《✧ 》═══════════════╗\033[0m                                                      " << endl;
        cout << "                                                                                                                                                                                  " << endl;
        cout << "                                                                                                   \033[38;5;214m 1. PLAY\033[0m                                                                       " << endl;
        cout << "                                                                                              \033[38;5;214m  ________________ \033[0m                                                                 " << endl;
        cout << "                                                                                                                                                                                  " << endl;
        cout << "                                                                                                \033[38;5;214m  2. ABOUT US\033[0m                                                                     " << endl;
        cout << "                                                                                              \033[38;5;214m __________________\033[0m                                                                 " << endl;
        cout << "                                                                                                                                                                                  " << endl;
        cout << "                                                                                              \033[38;5;214m 3. EXIT THE GAME\033[0m                                                                   " << endl;
        cout << "                                                                                                                                                                                   " << endl;
        cout << "                                                                                      \033[34m╚═══════════════《✧ 》═══════════════╝\033[0m                                                       " << endl;
        cout << "                                                                                                                                                                                   " << endl;
        cout << "                                                                                                                                                                                   " << endl;
        cout << "                                                                                                                                                                                   " << endl;
        cout << "                                                                                                                                                                                   " << endl;
        cout << "                                                                                                                                                                                   " << endl;
        cout << "                                                                                                                                                                                   " << endl;
        cout << "                                                                                                                                                                                   " << endl;
        cout << "                                                                                                                                                                                   " << endl;
        

        cin >> choice;
        


        if (choice == 1) {
            int miniGameChoice;
            while (true) {
                system("CLS");
                cout << "                                                                                                                                                                                  " << endl;
                cout << "                                                                                                                                                                                  " << endl;
                cout << "                                                                                                                                                                                  " << endl;
                cout << "                                                                                                                                                                                  " << endl;
                cout << "                                                                                                                                                                                  " << endl;
                cout << "                                                                                                                                                                                  " << endl;
                cout << "                                                                                                                                                                                  " << endl;
                cout << "                                                                                                                                                                                  " << endl;
                cout << "                                                                                                                                                                                  " << endl;
                cout << "                                                                 \033[31m ██████   █████  ███    ███ ███████     ███    ███ ███████ ███    ██ ██    ██\033[0m                      " << endl;
                cout << "                                                                \033[91m ██       ██   ██ ████  ████ ██          ████  ████ ██      ████   ██ ██    ██\033[0m                     " << endl;
                cout << "                                                                 \033[38;5;202m██  ███  ███████ ██ ████ ██ █████       ██ ████ ██ █████   ██ ██  ██ ██    ██\033[0m                " << endl;
                cout << "                                                                 \033[38;5;214m██    ██ ██   ██ ██  ██  ██ ██          ██  ██  ██ ██      ██  ██ ██ ██    ██ \033[0m               " << endl;
                cout << "                                                                 \033[33m ██████  ██   ██ ██      ██ ███████     ██      ██ ███████ ██   ████  ██████\033[0m                      " << endl;
                cout << "                                                                                                                                                                                  " << endl;
                cout << "                                                \033[34m ╒═════════════════════════════════════════════════════════════════════════════════════════════════════════════╕\033[0m   " << endl;
                cout << "                                                                                                                                                                                  " << endl;
                cout << "                                                                                      \033[38;5;214mCHOOSE WHAT GAME YOU WOULD LIKE TO PLAY:\033[0m                               " << endl;
                cout << "                                                                                                                                                                                  " << endl;
                cout << "                                                                                                                                                                                  " << endl;
                cout << "                                                                                   \033[34m    ╔═══════════════《✧ 》═══════════════╗ \033[0m                                     " << endl;
                cout << "                                                                                                                                                                                   " << endl;
                cout << "                                                                                                 \033[38;5;214m   1. Hangman\033[0m                                               " << endl;
                cout << "                                                                                               \033[34m  __________________\033[0m                                                " << endl;
                cout << "                                                                                                                                                                                  " << endl;
                cout << "                                                                                                   \033[38;5;214m  2. Wordle\033[0m                                                " << endl;
                cout << "                                                                                             \033[34m  ______________________\033[0m                                               " << endl;
                cout << "                                                                                                                                                                                  " << endl;
                cout << "                                                                                                \033[38;5;214m  3. Word Scramble\033[0m                                           " << endl;
                cout << "                                                                                            \033[34m __________________________ \033[0m                                           " << endl;
                cout << "                                                                                                                                                                                  " << endl;
                cout << "                                                                                               \033[38;5;214m 4. Back to Main Menu \033[0m                                        " << endl;
                cout << "                                                                                                                                                                                  " << endl;
                cout << "                                                                                     \033[34m  ╚═══════════════《✧ 》═══════════════╝ \033[0m                                     " << endl;
                cout << "                                                                                                                                                                                  " << endl;
                cout << "                                                \033[34m ╘═════════════════════════════════════════════════════════════════════════════════════════════════════════════╛\033[0m   " << endl;
                cout << "                                                                                                                                                                                  " << endl;
                cout << "                                                                                                                                                                                  " << endl;
                cout << "                                                                                                                                                                                  " << endl;
                cout << "                                                                                                                                                                                  " << endl;
                cout << "                                                                                                                                                                                  " << endl;
                

                cin >> miniGameChoice;

                if (miniGameChoice == 1) {
                    mainMenuHangman();
                } else if (miniGameChoice == 2) {
                    wordleMenu();
                } else if (miniGameChoice == 3) {
                    wordScrambleMenu();
                } else if (miniGameChoice == 4) {
                    break;
                } else {
            cout << "                                                                                                                                                                    " << endl;
            cout << "                                                               ┌──────────────────────────── ⋆⋅☆⋅⋆ ──────────────────────────────┐                                   " << endl;
            cout << "                                                                                                                                                                    " << endl;
            cout << "                                                                            !!!Invalid choice. Please try again!!!                                                      " << endl;
            cout << "                                                                                                                                                                    " << endl;
            cout << "                                                               └──────────────────────────── ⋆⋅☆⋅⋆ ──────────────────────────────┘                                   " << endl;
            
                }
            }
        } else if (choice == 2) {
    while (true) {
        system("CLS");
        cout << "                                                                                                                                                                     " << endl;
        cout << "                                                                                                                                                                     " << endl;
        cout << "                                                                                                                                                                     " << endl;
        cout << "                                                                                                                                                                     " << endl;
        cout << "                                                                                                                                                                     " << endl;
        cout << "                                                                                                                                                                     " << endl;
        cout << "                                                                                                                                                                     " << endl;
        cout << "                                                                                                                                                                     " << endl;
        cout << "                                                          \033[34m╒══════════════════════════════════════════════════════════════════════════════════════════╕\033[0m                       " << endl;
        cout << "                                                                                                                                                                     " << endl;
        cout << "                                                                       \033[34m┌──────────────────────────── ⋆⋅☆⋅⋆ ──────────────────────────────┐\033[0m                              " << endl;
        cout << "                                                                                                                                                                     " << endl;
        cout << "                                                                                                  \033[38;5;214mWHO ARE WE?\033[0m                                                           " << endl;
        cout << "                                                                                                                                                                     " << endl;
        cout << "                                                                                                                                                                     " << endl;
        cout << "                                                                                    \033[38;5;214mWe are CodeForge and our goal is to create\033[0m                                           " << endl;
        cout << "                                                                                \033[38;5;214mfun and easy word games to practice your english.\033[0m                                        " << endl;
        cout << "                                                                                \033[38;5;214mWith the help of games like Hangman, Word Scramble \033[0m                                      " << endl;
        cout << "                                                                                     \033[38;5;214mand Wordle, we manage to acomplish that! \033[0m                                           " << endl;
        cout << "                                                                                                                                                                     " << endl;
        cout << "                                                                                      \033[34m════════════════════════════════════ \033[0m                                             " << endl;
        cout << "                                                                                                                                                                     " << endl;
        cout << "                                                                                                 \033[38;5;214mMeet out team! \033[0m                                                        " << endl;
        cout << "                                                                                                                                                                     " << endl;
        cout << "                                                                                                                                                                     " << endl;
        cout << "                                                                                      \033[38;5;214mBojidar Georgiev (9B) - Scrum Trainer \033[0m                                            " << endl;
        cout << "                                                                                     \033[34m_______________________________________ \033[0m                                           " << endl;
        cout << "                                                                                                                                                                     " << endl;
        cout << "                                                                                  \033[38;5;214mKristiqn Daradjanov (9B) - FrontEnd Developer \033[0m                                        " << endl;
        cout << "                                                                                  \033[34m_____________________________________________ \033[0m                                        " << endl;
        cout << "                                                                                                                                                                     " << endl;
        cout << "                                                                                    \033[38;5;214mNikolai Dimitrov (9B) - BackEnd Developer \033[0m                                          " << endl;
        cout << "                                                                                   \033[34m___________________________________________  \033[0m                                        " << endl;
        cout << "                                                                                                                                                                     " << endl;
        cout << "                                                                                       \033[38;5;214mHristiqn Atanasov (9B) - Designer  \033[0m                                              " << endl;
        cout << "                                                                                                                                                                     " << endl;
        cout << "                                                                                                                                                                     " << endl;
        cout << "                                                                                                                                                                     " << endl;
        cout << "                                                                                      \033[38;5;214mPress 0 to return to the main menu. \033[0m                                              " << endl;
        cout << "                                                                                                                                                                     " << endl;
        cout << "                                                                        \033[34m└──────────────────────────── ⋆⋅☆⋅⋆ ──────────────────────────────┘ \033[0m                             " << endl;
        cout << "                                                                                                                                                                     " << endl;
        cout << "                                                         \033[34m╘═════════════════════════════════════════════════════════════════════════════════════════════╛ \033[0m                 " << endl;
        cout << "                                                                                                                                                                     " << endl;
        cout << "                                                                                                                                                                     " << endl;

        int returnToMenu;
        cin >> returnToMenu;

        if (returnToMenu == 0) {
            break; // Exit "About Us" section to return to main menu
        } else {
            cout << "Invalid input. Press 0 to return to the main menu." << endl;
        }
    }
} else if (choice == 3) {
    system("CLS");
    cout << "                                                                                                                                                                     " << endl;
    cout << "                                                                                                                                                                     " << endl;
    cout << "                                                                                                                                                                     " << endl;
    cout << "                                                                                                                                                                     " << endl;
    cout << "                                                                                                                                                                     " << endl;
    cout << "                                                        ╒═════════════════════════════════════════════════════════════════════════════════════╕                    " << endl;
    cout << "                                                                                                                                                                     " << endl;
    cout << "                                                                                                                                                                     " << endl;
    cout << "                                                                                      Exiting the game. Goodbye!" << endl;
    cout << "                                                                                                                                                                     " << endl;
    cout << "                                                                                                    0/                                                                " << endl;
    cout << "                                                                                                   /|                                                                " << endl;
    cout << "                                                                                                   /|\\                                                                " << endl;
    cout << "                                                                                                ╚═══════╝                                                            " << endl;
    cout << "                                                                                                                                                                     " << endl;
    cout << "                                                        ╘══════════════════════════════════════════════════════════════════════════════════════╛                  " << endl;
    cout << "                                                                                                                                                                     " << endl;
    break; // Exit the program
}
else {
    system("CLS");
            cout << "                                                                                                                                                      " << endl;
            cout << "                                                               ┌──────────────────────────── ⋆⋅☆⋅⋆ ──────────────────────────────┐                    " << endl;
            cout << "                                                                                                                                                      " << endl;
            cout << "                                                                        !!!Invalid choice. Please try again!!!                                        " << endl;
            cout << "                                                                                                                                                      " << endl;
            cout << "                                                               └──────────────────────────── ⋆⋅☆⋅⋆ ──────────────────────────────┘                     " << endl;

        }
    }
}

int main() {
    SetConsoleOutputCP(CP_UTF8); //include UTF-8 or Unicode characters 
    mainMenu();
}
