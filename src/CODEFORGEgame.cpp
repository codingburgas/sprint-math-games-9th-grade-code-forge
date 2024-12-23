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
            cout << "                                                                     \033[38;5;214m  ╔══════════════════════════════《✧ 》══════════════════════════════╗\033[0m " << endl;
            cout << "                                                                                                                                          " << endl; 
            cout << "                                                                                                                                          " << endl;
            cout << "                                                                               \033[38;5;229m                         __________                        \033[0m " << endl;
            cout << "                                                                               \033[38;5;229m                        |                                 \033[0m  " << endl;
            cout << "                                                                               \033[38;5;229m                        |                                  \033[0m " << endl;
            cout << "                                                                               \033[38;5;229m                        |                                  \033[0m " << endl;
            cout << "                                                                               \033[38;5;229m                  ______|______                           \033[0m  " << endl;
            cout << "                                                                               \033[38;5;229m                /       |     /|                          \033[0m  " << endl;
            cout << "                                                                               \033[38;5;229m               /             / |                          \033[0m  " << endl;
            cout << "                                                                               \033[38;5;229m              /_____________/  |                         \033[0m   " << endl;
            cout << "                                                                               \033[38;5;229m              |             | /                           \033[0m  " << endl;
            cout << "                                                                               \033[38;5;229m              |_____________|/                             \033[0m " << endl;
            cout << "                                                                                                                                            " << endl; 
            cout << "                                                                                                                                            " << endl;
            cout << "                                                                                                                                            " << endl;
            
        } else if (wrongAttempts == 1) { 
            cout << "                                                                                                                                            " << endl;
            cout << "                                                                                                                                            " << endl;
            cout << "                                                                                                                                            " << endl;
            cout << "                                                                                                                                            " << endl;
            cout << "                                                                       \033[38;5;214m╔══════════════════════════════《✧ 》══════════════════════════════╗\033[0m " << endl;
            cout << "                                                                                                                                            " << endl; 
            cout << "                                                                                                                                            " << endl;
            cout << "                                                                                         \033[38;5;229m               __________                       \033[0m  " << endl;
            cout << "                                                                                         \033[38;5;229m              |          |                     \033[0m   " << endl;
            cout << "                                                                                         \033[38;5;229m              |                                 \033[0m  " << endl;
            cout << "                                                                                         \033[38;5;229m              |                                 \033[0m  " << endl;
            cout << "                                                                                         \033[38;5;229m        ______|______                           \033[0m  " << endl;
            cout << "                                                                                         \033[38;5;229m      /       |     /|                          \033[0m  " << endl;
            cout << "                                                                                         \033[38;5;229m     /             / |                         \033[0m   " << endl;
            cout << "                                                                                         \033[38;5;229m    /_____________/  |                          \033[0m  " << endl;
            cout << "                                                                                         \033[38;5;229m    |             | /                            \033[0m " << endl;
            cout << "                                                                                         \033[38;5;229m    |_____________|/                           \033[0m   " << endl;
            cout << "                                                                                                                                            " << endl; 
            cout << "                                                                                                                                            " << endl;
            cout << "                                                                                                                                            " << endl;
        } 
else if (wrongAttempts == 2) { 
            cout << "                                                                                                                                            " << endl;
            cout << "                                                                                                                                            " << endl;
            cout << "                                                                                                                                            " << endl;
            cout << "                                                                                                                                            " << endl;
            cout << "                                                                     \033[38;5;214m  ╔══════════════════════════════《✧ 》══════════════════════════════╗\033[0m " << endl;
            cout << "                                                                                                                                            " << endl; 
            cout << "                                                                                                                                            " << endl;
            cout << "                                                                              \033[38;5;229m                          __________                       \033[0m  " << endl;
            cout << "                                                                              \033[38;5;229m                         |          |                     \033[0m   " << endl;
            cout << "                                                                              \033[38;5;229m                         |          |                     \033[0m   " << endl;
            cout << "                                                                              \033[38;5;229m                         |                                \033[0m   " << endl;
            cout << "                                                                              \033[38;5;229m                   ______|______                         \033[0m    " << endl;
            cout << "                                                                              \033[38;5;229m                 /       |     /|                          \033[0m  " << endl;
            cout << "                                                                              \033[38;5;229m                /             / |                          \033[0m  " << endl;
            cout << "                                                                              \033[38;5;229m               /_____________/  |                           \033[0m " << endl;
            cout << "                                                                              \033[38;5;229m               |             | /                           \033[0m  " << endl;
            cout << "                                                                              \033[38;5;229m               |_____________|/                           \033[0m   " << endl;
            cout << "                                                                                                                                            " << endl; 
            cout << "                                                                                                                                            " << endl;
            cout << "                                                                                                                                            " << endl;
        } 
else if (wrongAttempts == 3) { 
            cout << "                                                                                                                                            " << endl;
            cout << "                                                                                                                                            " << endl;
            cout << "                                                                                                                                            " << endl;
            cout << "                                                                                                                                            " << endl;
            cout << "                                                                      \033[38;5;214m ╔══════════════════════════════《✧ 》══════════════════════════════╗\033[0m " << endl;
            cout << "                                                                                                                                          " << endl; 
            cout << "                                                                                                                                          " << endl;
            cout << "                                                                              \033[38;5;229m                          __________                     \033[0m    " << endl;
            cout << "                                                                              \033[38;5;229m                         |          |                     \033[0m   " << endl;
            cout << "                                                                              \033[38;5;229m                         |          |                     \033[0m   " << endl;
            cout << "                                                                              \033[38;5;229m                         |          0                     \033[0m   " << endl;
            cout << "                                                                              \033[38;5;229m                   ______|______                          \033[0m   " << endl;
            cout << "                                                                              \033[38;5;229m                 /       |     /|                         \033[0m   " << endl;
            cout << "                                                                              \033[38;5;229m                /             / |                         \033[0m   " << endl;
            cout << "                                                                              \033[38;5;229m               /_____________/  |                          \033[0m  " << endl;
            cout << "                                                                              \033[38;5;229m               |             | /                           \033[0m  " << endl;
            cout << "                                                                              \033[38;5;229m               |_____________|/                             \033[0m " << endl;
            cout << "                                                                                                                                             " << endl; 
            cout << "                                                                                                                                            " << endl;
            cout << "                                                                                                                                            " << endl;
        } 
        else if (wrongAttempts == 4) { 
            cout << "                                                                                                                                            " << endl;
            cout << "                                                                                                                                            " << endl;
            cout << "                                                                                                                                            " << endl;
            cout << "                                                                                                                                            " << endl;
            cout << "                                                                       \033[38;5;214m╔══════════════════════════════《✧ 》══════════════════════════════╗\033[0m " << endl;
            cout << "                                                                                                                                            " << endl; 
            cout << "                                                                                                                                            " << endl;
            cout << "                                                                             \033[38;5;229m                           __________               \033[0m          " << endl;
            cout << "                                                                             \033[38;5;229m                          |          |                 \033[0m       " << endl;
            cout << "                                                                             \033[38;5;229m                          |          |                \033[0m        " << endl;
            cout << "                                                                             \033[38;5;229m                          |          0                 \033[0m       " << endl;
            cout << "                                                                             \033[38;5;229m                    ______|______    |                \033[0m        " << endl;
            cout << "                                                                             \033[38;5;229m                  /       |     /|                   \033[0m         " << endl;
            cout << "                                                                             \033[38;5;229m                 /             / |                    \033[0m        " << endl;
            cout << "                                                                             \033[38;5;229m                /_____________/  |                     \033[0m       " << endl;
            cout << "                                                                             \033[38;5;229m                |             | /                      \033[0m       " << endl;
            cout << "                                                                             \033[38;5;229m                |_____________|/                      \033[0m        " << endl;
            cout << "                                                                                                                                            " << endl; 
            cout << "                                                                                                                                            " << endl;
            cout << "                                                                                                                                            " << endl;
        } 
        else if (wrongAttempts == 5) { 
            cout << "                                                                                                                                            " << endl;
            cout << "                                                                                                                                            " << endl;
            cout << "                                                                                                                                            " << endl;
            cout << "                                                                                                                                            " << endl;
            cout << "                                                                      \033[38;5;214m ╔══════════════════════════════《✧ 》══════════════════════════════╗\033[0m " << endl;
            cout << "                                                                                                                                            " << endl; 
            cout << "                                                                                                                                            " << endl;
            cout << "                                                                     \033[38;5;229m                                   __________                  \033[0m       " << endl;
            cout << "                                                                     \033[38;5;229m                                  |          |                 \033[0m       " << endl;
            cout << "                                                                     \033[38;5;229m                                  |          |                \033[0m        " << endl;
            cout << "                                                                     \033[38;5;229m                                  |          0               \033[0m         " << endl;
            cout << "                                                                     \033[38;5;229m                            ______|______   /|                \033[0m        " << endl;
            cout << "                                                                     \033[38;5;229m                          /       |     /|                     \033[0m       " << endl;
            cout << "                                                                     \033[38;5;229m                         /             / |                     \033[0m       " << endl;
            cout << "                                                                     \033[38;5;229m                        /_____________/  |                     \033[0m       " << endl;
            cout << "                                                                     \033[38;5;229m                        |             | /                       \033[0m      " << endl;
            cout << "                                                                     \033[38;5;229m                        |_____________|/                        \033[0m      " << endl;
            cout << "                                                                                                                                            " << endl; 
            cout << "                                                                                                                                            " << endl;
            cout << "                                                                                                                                            " << endl;
        } 
        else if (wrongAttempts == 6) { 
            cout << "                                                                                                                                            " << endl;
            cout << "                                                                                                                                            " << endl;
            cout << "                                                                                                                                            " << endl;
            cout << "                                                                                                                                            " << endl;
            cout << "                                                                      \033[38;5;214m ╔══════════════════════════════《✧ 》══════════════════════════════╗\033[0m " << endl;
            cout << "                                                                                                                                            " << endl; 
            cout << "                                                                                                                                            " << endl;
            cout << "                                                                     \033[38;5;229m                                   __________                   \033[0m      " << endl;
            cout << "                                                                     \033[38;5;229m                                  |          |                  \033[0m      " << endl;
            cout << "                                                                     \033[38;5;229m                                  |          |                  \033[0m      " << endl;
            cout << "                                                                     \033[38;5;229m                                  |          0                 \033[0m       " << endl;
            cout << "                                                                     \033[38;5;229m                            ______|______   /|\\                 \033[0m     " << endl;
            cout << "                                                                     \033[38;5;229m                          /       |     /|                      \033[0m      " << endl;
            cout << "                                                                     \033[38;5;229m                         /             / |                      \033[0m      " << endl;
            cout << "                                                                     \033[38;5;229m                        /_____________/  |                      \033[0m      " << endl;
            cout << "                                                                     \033[38;5;229m                        |             | /                       \033[0m      " << endl;
            cout << "                                                                     \033[38;5;229m                        |_____________|/                         \033[0m     " << endl;
            cout << "                                                                                                                                            " << endl; 
            cout << "                                                                                                                                            " << endl;
            cout << "                                                                                                                                            " << endl;
        } 
        else if (wrongAttempts == 7) { 
            cout << "                                                                                                                                            " << endl;
            cout << "                                                                                                                                            " << endl;
            cout << "                                                                                                                                            " << endl;
            cout << "                                                                                                                                            " << endl;
            cout << "                                                                     \033[38;5;214m  ╔══════════════════════════════《✧ 》══════════════════════════════╗\033[0m " << endl;
            cout << "                                                                                                                                            " << endl; 
            cout << "                                                                                                                                            " << endl;
            cout << "                                                                  \033[38;5;229m                                      __________                   \033[0m      " << endl;
            cout << "                                                                  \033[38;5;229m                                     |          |                  \033[0m      " << endl;
            cout << "                                                                  \033[38;5;229m                                     |          |                  \033[0m     " << endl;
            cout << "                                                                  \033[38;5;229m                                     |          0                   \033[0m     " << endl;
            cout << "                                                                  \033[38;5;229m                               ______|______   /|\\                  \033[0m    " << endl;
            cout << "                                                                  \033[38;5;229m                             /       |     /|  /                   \033[0m     " << endl;
            cout << "                                                                  \033[38;5;229m                            /             / |                      \033[0m      " << endl;
            cout << "                                                                  \033[38;5;229m                           /_____________/  |                      \033[0m      " << endl;
            cout << "                                                                  \033[38;5;229m                           |             | /                       \033[0m      " << endl;
            cout << "                                                                  \033[38;5;229m                           |_____________|/                        \033[0m      " << endl;
            cout << "                                                                                                                                            " << endl; 
            cout << "                                                                                                                                            " << endl;
            cout << "                                                                                                                                            " << endl;
        } 
        else if (wrongAttempts == 8) { 
            cout << "                                                                                                                                            " << endl;
            cout << "                                                                                                                                            " << endl;
            cout << "                                                                                                                                            " << endl;
            cout << "                                                                                                                                            " << endl;
            cout << "                                                                     \033[38;5;214m  ╔══════════════════════════════《✧ 》══════════════════════════════╗\033[0m " << endl;
            cout << "                                                                                                                                            " << endl; 
            cout << "                                                                                                                                            " << endl;
            cout << "                                                                \033[38;5;229m                                        __________        \033[0m                 " << endl;
            cout << "                                                                \033[38;5;229m                                       |          |         \033[0m               " << endl;
            cout << "                                                                \033[38;5;229m                                       |          |         \033[0m               " << endl;
            cout << "                                                                \033[38;5;229m                                       |          0         \033[0m               " << endl;
            cout << "                                                                \033[38;5;229m                                 ______|______   /|\\        \033[0m              " << endl;
            cout << "                                                                \033[38;5;229m                               /       |     /|  / \\        \033[0m              " << endl;
            cout << "                                                                \033[38;5;229m                              /             / |             \033[0m               " << endl;
            cout << "                                                                \033[38;5;229m                             /_____________/  |              \033[0m              " << endl;
            cout << "                                                                \033[38;5;229m                             |             | /               \033[0m              " << endl;
            cout << "                                                                \033[38;5;229m                             |_____________|/                 \033[0m             " << endl;
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
        
        cout << "                                                                                        \033[38;5;229m          Guessed letters: \033[0m ";
        for (char letter : guessedLetters) {
            cout << letter << " ";
        }
        cout << endl;

        cout << "                                                                                                      "; // Position of hidden word
        displayWord(word, guessedLetters); 
        cout << "                                                                                           \033[38;5;229m        Enter a letter.      \033[0m                   " << endl;
        cout << "                                                                                                          " << endl;
        cout << "                                                                     \033[38;5;214m  ╚════════════════════════════════《✧ 》════════════════════════════╝\033[0m " << endl;

        string input;
        cout << "                                                                                                          "; //Position of input 
        cin >> input;
       
        // Check if the input contains more than one character
        if (input.length() != 1) {
            system("CLS");
            cout << "                                                                                                            " << endl;
            cout << "                                                                                                            " << endl;
            cout << "                                                                                                            " << endl;
            cout << "                                                                                    \033[38;5;229m    ╔═════════════════════════════════╗    \033[0m         " << endl;
            cout << "                                                                                   \033[38;5;229m         Please enter only one letter!     \033[0m        " << endl;
            cout << "                                                                                   \033[38;5;229m     ╘═════════════════════════════════╛\033[0m             " << endl;
            continue; // Continues the loop
        }

        char guess = tolower(input[0]); // Get the first character

        if (find(guessedLetters.begin(), guessedLetters.end(), guess) != guessedLetters.end()) {
            system("CLS");
            cout << "                                                                                                            " << endl;
            cout << "                                                                                                            " << endl;
            cout << "                                                                                                            " << endl;
            cout << "                                                                                   \033[38;5;229m     ╔════════════════════════════════╗\033[0m               " << endl;
            cout << "                                                                                   \033[38;5;229m       You already guessed that letter!\033[0m " << endl;
            cout << "                                                                                  \033[38;5;229m      ╘════════════════════════════════╛\033[0m " << endl;
            continue;
        }

        guessedLetters.push_back(guess);

        if (word.find(guess) == string::npos) {
            system("CLS");
            wrongAttempts++;
            cout << "                                                                                                            " << endl;
            cout << "                                                                                                            " << endl;
            cout << "                                                                                                            " << endl;
            cout << "                                                                     \033[38;5;229m    ╔══════════════════════════════════════════════════════════════╗ \033[0m               " << endl;
            cout << "                                                                      \033[38;5;229m              Wrong guess! You have " << (maxAttempts - wrongAttempts) << " attempts left.\033[0m " << endl;
            cout << "                                                                       \033[38;5;229m  ╘══════════════════════════════════════════════════════════════╛ \033[0m               " << endl;
        } else {
            system("CLS");
            cout << "                                                                                                            " << endl;
            cout << "                                                                                                            " << endl;
            cout << "                                                                                                            " << endl;
            cout << "                                                                               \033[38;5;229m           ╔══════════════════════════╗\033[0m                " << endl;
            cout << "                                                                               \033[38;5;229m                    Good guess!\033[0m " << endl;
            cout << "                                                                                \033[38;5;229m          ╘══════════════════════════╛\033[0m " << endl;
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
            cout << "                                                            \033[38;5;214m           ┌──────────────────────────── ⋆⋅☆⋅⋆ ──────────────────────────────┐ \033[0m                    " << endl;
            cout << "                                                                                                                    " << endl;
            cout << "                                                    \033[38;5;214m   ╒═══════════════════════════════════════════════════════════════════════════════════════════════╕\033[0m        " << endl;
            cout << "                                                                                                                                      " << endl;
            cout << "                                                                   \033[38;5;229m            Congratulations! You've guessed the word: " << word << "!!\033[0m " << endl;
            cout << "                                                                                                                            " << endl;
            cout << "                                                  \033[38;5;214m     ╘═══════════════════════════════════════════════════════════════════════════════════════════════╛  \033[0m       " << endl;
            cout << "                                                                                                                     " << endl;
            cout << "                                                                \033[38;5;214m       └──────────────────────────── ⋆⋅☆⋅⋆ ──────────────────────────────┘ \033[0m                                             " << endl;

            // Ask player if they want to play again or return to menu
            cout << "                                                                                                                    " << endl;
            cout << "                                                                                                                    " << endl;
            cout << "                                                                                                                    " << endl;
            cout << "                                                       \033[38;5;214m  ╔══════════════════════════════════════════《✧ 》══════════════════════════════════════════╗ \033[0m " << endl;
            cout << "                                                                                                                    " << endl;
            cout << "                                                           \033[38;5;229m     Would you like to play again? Enter 1 for Yes, 2 to return to the Hangman menu: \033[0m ";
            cout << "                                                                                                                    " << endl;
            cout << "                                                      \033[38;5;214m   ╚══════════════════════════════════════════《✧ 》══════════════════════════════════════════╝\033[0m  " << endl;
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
    cout << "                                         \033[38;5;214m              ╒════════════════════════════════════════════════════════════════════════════════════════════════╕ \033[0m       " << endl;
    cout << "                                                                                                                    " << endl;
    cout << "                                                                                                                            " << endl;
    cout << "                                                                     \033[38;5;229m           You've been hanged! Better luck next time! \033[0m " << endl;
    cout << "                                                                                                                            " << endl;
    cout << "                                                                       \033[38;5;229m                      The word was: " << word << "\033[0m" << endl; // Display the word
    cout << "                                                                                                                            " << endl;
    cout << "                                                                                                                      " << endl;
    cout << "                                         \033[38;5;214m              ╘════════════════════════════════════════════════════════════════════════════════════════════════╛\033[0m        " << endl;

    // Ask player if they want to play again or return to menu
    cout << "                                                       \033[38;5;214m   ╔══════════════════════════════════════════《✧ 》══════════════════════════════════════════╗ \033[0m" << endl;
    cout << "                                                                                                                    " << endl;
    cout << "                                                             \033[38;5;229m  Would you like to play again? Enter 1 for Yes, 2 to return to the Hangman menu: \033[0m ";
    cout << "                                                                                                                    " << endl;
    cout << "                                                       \033[38;5;214m   ╚══════════════════════════════════════════《✧ 》══════════════════════════════════════════╝\033[0m " << endl;
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
                cout << "                                                   \033[38;5;226m                        ╔════════════════════════════《✧ 》═══════════════════════════╗\033[0m                       " << endl;
                cout << "                                                                                                                                                                " << endl;
                cout << "                                                  \033[38;5;226m       ╒═══════════════════════════════════════════════════════════════════════════════════════════════╕\033[0m      " << endl;
                cout << "                                                                                                                                                                " << endl;
                cout << "                                                                                       \033[38;5;208m CHOOSE DIFFICULTY LEVEL FOR HANGMAN:\033[0m                                    " << endl;
                cout << "                                                                                                                                                                " << endl;
                cout << "                                                                                                                                                                " << endl;
                cout << "                                                                                                                                                                " << endl;
                cout << "                                                                               \033[38;5;208m          1. Easy (8 attempts, max 6 letters) \033[0m                                   " << endl;
                cout << "                                                                                  \033[38;5;226m   __________________________________________   \033[0m                              " << endl;
                cout << "                                                                                                                                                                " << endl;
                cout << "                                                                                    \033[38;5;208m    2. Medium (7 attempts, max 9 letters)     \033[0m                              " << endl;
                cout << "                                                                                 \033[38;5;226m   ____________________________________________    \033[0m                            " << endl;
                cout << "                                                                                                                                                                " << endl;
                cout << "                                                                                     \033[38;5;208m   3. Hard (6 attempts, max 12 letters)       \033[0m                             " << endl;
                cout << "                                                                                  \033[38;5;226m      ____________________________________        \033[0m                            " << endl;
                cout << "                                                                                                                                                                " << endl;
                cout << "                                                                                     \033[38;5;208m          4. Back to Hangman Menu                        \033[0m                  " << endl;
                cout << "                                                                                                                                                                " << endl;
                cout << "                                                                                                                                                                " << endl;
                cout << "                                                     \033[38;5;226m    ╘═══════════════════════════════════════════════════════════════════════════════════════════════╛ \033[0m     " << endl;
                cout << "                                                                                                                                                                " << endl;
                cout << "                                                                  \033[38;5;226m         ╚═══════════════════════════《✧ 》════════════════════════════╝ \033[0m                      " << endl;

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
            cout << "                                        ╒══════════════════════════════════════════════════════════════════════════════════════════╕      \033[0m  " << endl;
            cout << "                                                                                                                    " << endl;
            cout << "                                                               !!!Invalid choice. Please select again!!!\033[0m " << endl;
            cout << "                                                                                                                     " << endl;
            cout << "                                        ╘══════════════════════════════════════════════════════════════════════════════════════════╛       \033[0m  " << endl;
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
            cout << "                                                                                                                                                     " << endl;
            cout << "                                                                 \033[38;5;34m    ┌──────────────────────────── ⋆⋅☆⋅⋆ ──────────────────────────────┐  \033[0m                    " << endl;
            cout << "                                                                                                                                                    " << endl;
            cout << "                                                \033[38;5;36m      ╒═══════════════════════════════════════════════════════════════════════════════════════════════╕  \033[0m       " << endl;
            cout << "                                                                                                                                                    " << endl;
            cout << "                                                                                         \033[38;5;46m     RULES OF HANGMAN:  \033[0m                                               " << endl;
            cout << "                                                                                                                                                     " << endl;
            cout << "                                                                      \033[38;5;48m      1. You have a limited number of incorrect guesses.  \033[0m                              " << endl;
            cout << "                                                                                                                                                    " << endl;
            cout << "                                                           \033[38;5;50m      2. Each time you guess a letter that is not in the word, you lose a chance.  \033[0m                 " << endl;
            cout << "                                                                                                                                                     " << endl;
            cout << "                                                             \033[38;5;58m      3. The game ends when you either guess the word or run out of chances.  \033[0m                    " << endl;
            cout << "                                                                                                                                                     " << endl;
            cout << "                                                                                \033[38;5;64m      Press 0 to return to the main menu.  \033[0m                                    " << endl;
            cout << "                                                                                                                                                     " << endl;
            cout << "                                                                                                                                                     " << endl;
            cout << "                                                                                              \033[38;5;70m     __________  \033[0m                                                            " << endl;
            cout << "                                                                                              \033[38;5;76m    |          |  \033[0m                                             " << endl;
            cout << "                                                                                               \033[38;5;220m   |          |  \033[0m                                             " << endl;
            cout << "                                                                                               \033[38;5;226m   |          0  \033[0m                                            " << endl;
            cout << "                                                                                         \033[38;5;214m   ______|______   /|\\  \033[0m                                            " << endl;
            cout << "                                                                                       \033[38;5;190m   /       |     /|  /|\\  \033[0m                                            " << endl;
            cout << "                                                                                      \033[38;5;184m   /             / |  \033[0m                                              " << endl;
            cout << "                                                                                     \033[38;5;178m   /_____________/  |  \033[0m                                              " << endl;
            cout << "                                                                                    \033[38;5;154m    |             | /  \033[0m                                             " << endl;
            cout << "                                                                                    \033[38;5;142m    |_____________|/  \033[0m                                               " << endl;
            cout << "                                                                                                                                                     " << endl;
            cout << "                                                                                                                                                     " << endl;
            cout << "                                                                                                                                                     " << endl;
            cout << "                                                \033[38;5;34m      ╘═══════════════════════════════════════════════════════════════════════════════════════════════╛  \033[0m        " << endl;
            cout << "                                                                                                                                     " << endl;
            cout << "                                                                 \033[38;5;36m   └──────────────────────────── ⋆⋅☆⋅⋆ ──────────────────────────────┘  \033[0m                                             " << endl;
                

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
            cout << "                                                     ┌──────────────────────────── ⋆⋅☆⋅⋆ ──────────────────────────────┐    \033[0m                 " << endl;
            cout << "                                                                  !!!Invalid choice. Please try again!!!                  \033[0m               " << endl;
            cout << "                                                     └──────────────────────────── ⋆⋅☆⋅⋆ ──────────────────────────────┘     \033[0m           " << endl;
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
    cout << "                                                        \033[38;5;120m ╒═══════════════════════════════════════════════════════════════════════════════════════════════╕  \033[0m      " << endl;
    cout << "                                                                                                                                                     " << endl;
    cout << "                                                                                                                                                     " << endl;
    cout << "                                                                    \033[38;5;120m    ╔══════════════════════════════《✧ 》══════════════════════════════╗   \033[0m " << endl;
    cout << "                                                                                                                                                     " << endl;
    cout << "                                                                           \033[38;5;229m      Guess the 5-letter word. You have " << attempts << " attempts.\033[0m " << endl;
    cout << "                                                                                                                                                     " << endl;
    cout << "                                                                     \033[38;5;120m   ╚══════════════════════════════《✧ 》══════════════════════════════╝\033[0m " << endl;
    cout << "                                                                                                                                                     " << endl;
    cout << "                                                                                                                                                     " << endl;
    cout << "                                                        \033[38;5;120m ╘═══════════════════════════════════════════════════════════════════════════════════════════════╛\033[0m " << endl;
    cout << "                                                                                                                                                     " << endl;

    // Main game loop
    while (attempts > 0) {
        cout << "                                                                                                      ";
        cin >> guess;

        // Check the guess if it's a valid 5-letter word
        if (guess.length() != 5) {
            cout << "                                                                                                                                                     " << endl;
            cout << "                                                                              ┌─────────────────────── ⋆⋅☆⋅⋆ ────────────────────────┐ \033[0m " << endl;
            cout << "                                                                                         Please enter a 5-letter word!\033[0m " << endl;
            cout << "                                                                              └─────────────────────── ⋆⋅☆⋅⋆ ────────────────────────┘      \033[0m         " << endl;
            cout << "                                                                                                                                                     " << endl;
            cout << "                                                                                                                                                     " << endl;
            continue;
        }

        if (guess == secretWord) {
            system("CLS");
            cout << "                                                                                                                                        " << endl;
            cout << "                                                                                                                                        " << endl;
            cout << "                                                                                                                                        " << endl;
            cout << "                                                                                                                                        " << endl;
            cout << "                                                                                                                                        " << endl;
            cout << "                                                                                                                                        " << endl;
            cout << "                                                                                                                                        " << endl;
            cout << "                                                 \033[38;5;229m    ╒═════════════════════════════════════════════════════════════════════════════════════════════════════════════════╕" << endl;
            cout << "                                                                                                                                        " << endl;
            cout << "                                                                                                                                        " << endl;
            cout << "                                                                 \033[38;5;229m               Congratulations! You've guessed the word correctly! \033[0m " << endl;
            cout << "                                                            \033[38;5;229m        Would you like to play again? Enter 1 for Yes, 2 to go back to the Wordle menu: \033[0m " << endl;
            cout << "                                                                                                                                        " << endl;
            cout << "                                                                                                                                        " << endl;
            cout << "                                                     \033[38;5;229m╘═════════════════════════════════════════════════════════════════════════════════════════════════════════════════╛\033[0m " << endl;
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
            cout << "                                                                                 \033[38;5;229m        ╔═════════════════════════════════╗\033[0m " << endl;
            cout << "                                                                                  \033[38;5;229m            You have " << attempts << " attempts left.\033[0m " << endl;
            cout << "                                                                                \033[38;5;229m         ╘═════════════════════════════════╛\033[0m " << endl;
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
                cout << "                                                 \033[38;5;229m    ╒═════════════════════════════════════════════════════════════════════════════════════════════════════════════════╕\033[0m " << endl;
                cout << "                                                                                                                                        " << endl;
                cout << "                                                        \033[38;5;229m    ╔═══════════════════════════════════════════════《✧ 》══════════════════════════════════════════════╗\033[0m " << endl;
                cout << "                                                                                                                                        " << endl;
                cout << "                                                                          \033[38;5;229m               Game over! The correct word was: " << secretWord << "\033[0m " << endl;
                cout << "                                                                                                                                        " << endl;
                cout << "                                                                \033[38;5;229m     Would you like to play again? Enter 1 for Yes, 2 to go back to the Wordle menu: \033[0m " << endl;
                cout << "                                                                                                                                        " << endl;
                cout << "                                                           \033[38;5;229m ╚═══════════════════════════════════════════════《✧ 》══════════════════════════════════════════════╝ \033[0m " << endl;
                cout << "                                                                                                                                        " << endl;
                cout << "                                                     \033[38;5;229m╘═════════════════════════════════════════════════════════════════════════════════════════════════════════════════╛\033[0m " << endl;
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
    cout << "                                                                          \033[38;5;27m  ╔═════════════════════════════《✧ 》════════════════════════════╗            \033[0m                              " << endl;
    cout << "                                                                                                                                                                      " << endl;
    cout << "                                                        \033[38;5;27m  ╒═════════════════════════════════════════════════════════════════════════════════════════════════╕       \033[0m                " << endl;
    cout << "                                                                                                                                                                      " << endl;
    cout << "                                                                                    \033[38;5;159m      CHOOSE DIFFICULTY LEVEL FOR WORDLE \033[0m " << endl;
    cout << "                                                                                                                                                                      " << endl;
    cout << "                                                                                                                                                                      " << endl;
    cout << "                                                                                         \033[38;5;159m         1. Easy (6 attempts) \033[0m " << endl;
    cout << "                                                                                             \033[38;5;27m  ___________________________      \033[0m                                               " << endl;
    cout << "                                                                                                                                                                      " << endl;
    cout << "                                                                                         \033[38;5;159m        2. Medium (5 attempts) \033[0m " << endl;
    cout << "                                                                                          \033[38;5;27m    _____________________________   \033[0m                                                        " << endl;
    cout << "                                                                                                                                                                      " << endl;
    cout << "                                                                                         \033[38;5;159m         3. Hard (4 attempts) \033[0m " << endl;
    cout << "                                                                                            \033[38;5;27m   ___________________________    \033[0m                                                       " << endl;
    cout << "                                                                                                                                                                      " << endl;
    cout << "                                                                                        \033[38;5;159m         4. Back to Wordle Menu \033[0m " << endl;
    cout << "                                                                                                                                                                      " << endl;
    cout << "                                                                                                                                                                      " << endl;
    cout << "                                                        \033[38;5;27m  ╘═════════════════════════════════════════════════════════════════════════════════════════════════╛     \033[0m                  " << endl;
    cout << "                                                                                                                                                                      " << endl;
    cout << "                                                                       \033[38;5;27m     ╚════════════════════════════《✧ 》═════════════════════════════╝  \033[0m                                    " << endl;
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
            cout << "                                                                      \033[38;5;190m   ┌──────────────────────────── ⋆⋅☆⋅⋆ ──────────────────────────────┐ \033[0m                              " << endl;
            cout << "                                                                                                                                                                    " << endl;
            cout << "                                                      \033[38;5;238m   ╒═══════════════════════════════════════════════════════════════════════════════════════════════╕ \033[0m               " << endl;
            cout << "                                                                                                                                                                    " << endl;
            cout << "                                                                                              \033[38;5;178m   RULES OF WORDLE \033[0m                                                          " << endl;
            cout << "                                                                                                                                                                   " << endl;
            cout << "                                                                                                                                                                    " << endl;
            cout << "                                                                                                                                                                    " << endl;
            cout << "                                                                                       \033[38;5;241m   1. Guess the 5-letter word. \033[0m                                                      " << endl;
            cout << "                                                                                                                                                                    " << endl;
            cout << "                                                                       \033[38;5;154m   2. You have a limited number of attempts based on difficulty. \033[0m                                      " << endl;
            cout << "                                                                                                                                                                    " << endl;
            cout << "                                                                     \033[38;5;237m   3. Correct letters in the correct position will be shown as it is. \033[0m                                  " << endl;
            cout << "                                                                                                                                                                    " << endl;
            cout << "                                                                     \033[38;5;214m   4. Correct letters in the wrong position will be indicated with '*' \033[0m                                 " << endl;
            cout << "                                                                                                                                                                    " << endl;
            cout << "                                                                                \033[38;5;235m   5. Incorrect letters will be shown as '_'. \033[0m                                              " << endl;
            cout << "                                                                                                                                                                    " << endl;
            cout << "                                                                                                                                                                    " << endl;
            cout << "                                                                                                                                                                    " << endl;
            cout << "                                                                                    \033[38;5;154m   Press 0 to return to the Wordle menu. \033[0m                                                " << endl;
            cout << "                                                                                                                                                                    " << endl;
            cout << "                                                                                                                                                                    " << endl;
            cout << "                                                                                          \033[38;5;214m   black ---> _ * a c _ \033[0m                                                          " << endl;
            cout << "                                                                                          \033[38;5;237m   cross ---> * _ _ _ _ \033[0m                                                           " << endl;
            cout << "                                                                             \033[38;5;154m   EXAMPLE:     apple ---> * * * _ * \033[0m                                                           " << endl;
            cout << "                                                                                          \033[38;5;241m   reach ---> _ e a c h \033[0m                                                          " << endl;
            cout << "                                                                                           \033[38;5;178m  peach ---> p e a c h (Correct word) \033[0m                                           " << endl;
            cout << "                                                                                                                                                                    " << endl;
            cout << "                                                                                                                                                                    " << endl;
            cout << "                                                      \033[38;5;238m   ╘═══════════════════════════════════════════════════════════════════════════════════════════════╛ \033[0m               " << endl;
            cout << "                                                                                                                                                                    " << endl;
            cout << "                                                                      \033[38;5;190m   └───────────────────────────── ⋆⋅☆⋅⋆ ─────────────────────────────┘ \033[0m                               " << endl;
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
    if (difficulty == 1) attempts = 6; // Easy
    else if (difficulty == 2) attempts = 5; // Medium
    else if (difficulty == 3) attempts = 4; // Hard
    system("CLS");
    cout << "                                                                                                                                                                      " << endl;
    cout << "                                                                                                                                                                      " << endl;
    cout << "                                                                                                                                                                      " << endl;
    cout << "                                                                                                                                                                      " << endl;
    cout << "                                                                                                                                                                      " << endl;
    cout << "                                                                                                                                                                      " << endl;
    cout << "                                                                                                                                                                      " << endl;
    cout << "                                                     \033[38;5;27m     ╒═══════════════════════════════════════════════════════════════════════════════════════════════╕ \033[0m              " << endl;
    cout << "                                                                                                                                                                      " << endl;
    cout << "                                                          \033[38;5;27m              ┌───────────────────────────── ⋆⋅☆⋅⋆ ─────────────────────────────┐         \033[0m                              " << endl;
    cout << "                                                                                                                                                                      " << endl;
    cout << "                                                                                                                                                                        " << endl;
    cout << "                                                                                \033[38;5;117m            Guess the word: " << scrambledWord << "\033[0m " << endl;
    cout << "                                                                                                                                                                      " << endl;
    cout << "                                                                                                                                                                    " << endl;
    cout << "                                                              \033[38;5;27m          └───────────────────────────── ⋆⋅☆⋅⋆ ─────────────────────────────┘   \033[0m                                     " << endl;
    cout << "                                                                                                                                                                      " << endl;
    cout << "                                                      \033[38;5;27m    ╘═══════════════════════════════════════════════════════════════════════════════════════════════╛\033[0m          " << endl;

    while (attempts > 0) {
        
        cout << "                                                                                                                                                                      " << endl;
        cout << "                                                                                                                                                                      " << endl;
        cout << "                                                                       \033[38;5;27m    ╔═══════════════════════════《✧ 》════════════════════════════╗  \033[0m                                            " << endl;
        cout << "                                                                                                                                                                      " << endl;
        cout << "                                                                          \033[38;5;117m                   You have " << attempts << " attempts left.\033[0m ";
        cout << "                                                                                                                                                                      " << endl;
        cout << "                                                                        \033[38;5;27m   ╚═══════════════════════════《✧ 》════════════════════════════╝    \033[0m                    " << endl;
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
            cout << "                                       \033[38;5;27m   ╒═══════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════╕\033[0m               " << endl;
            cout << "                                                                                                                                                                      " << endl;
            cout << "                                                                                                                                                                      " << endl;
            cout << "                                                                     \033[38;5;117m   ╔═══════════════════════════════《✧ 》════════════════════════════════╗  \033[0m                                            " << endl;
            cout << "                                                                                                                                                                      " << endl;
            cout << "                                                                       \033[38;5;117m             Congratulations! You've guessed the word: " << word << "! \033[0m " << endl;
            cout << "                                                                                                                                                                      " << endl;
            cout << "                                                                     \033[38;5;117m   ╚═══════════════════════════════《✧ 》════════════════════════════════╝  \033[0m                                           " << endl;
            cout << "                                                                                                                                                                      " << endl;

            // Ask the player if they want to play again or return to the menu
            cout << "                                                                                                                                                                      " << endl;
            cout << "                                                          \033[38;5;117m  ╒═══════════════════════════════════════════════════════════════════════════════════════════════╕  \033[0m             " << endl;
            cout << "                                                                                                                                                                      " << endl;
            cout << "                                                             \033[38;5;117m    Would you like to play again? Enter 1 for Yes, 2 to return to the Word Scramble menu: \033[0m ";
            cout << "                                                                                                                                                                      " << endl;
            cout << "                                                          \033[38;5;117m  ╘═══════════════════════════════════════════════════════════════════════════════════════════════╛ \033[0m         " << endl;
            cout << "                                                                                                                                                                      " << endl;
            cout << "                                                                                                                                                                      " << endl;
            cout << "                                                                                                                                                                      " << endl;
            cout << "                                       \033[38;5;27m    ╘══════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════╛ \033[0m " << endl;
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
            cout << "                                                                                       \033[38;5;117m    ╔═══════════════════════════╗   \033[0m                               " << endl;
            cout << "                                                                                       \033[38;5;117m       Wrong guess. Try again.\033[0m " << endl;
            cout << "                                                                                      \033[38;5;117m     ╘═══════════════════════════╛ \033[0m                                    " << endl;

        }
    }
    cout << "                                                                                                                                                                      " << endl;
    cout << "                                                                                                                                                                      " << endl;
    cout << "                                                                     \033[38;5;117m ╔══════════════════════════════════════════════ ⋆★⋆ ══════════════════════════════════════════════╗  \033[0m                              " << endl;
    cout << "                                                                                                                                                                      " << endl;
    cout << "                                                                         \033[38;5;117m               Sorry, you've used all your attempts. The word was: \033[0m " << word << endl;
    cout << "                                                                                                                                                                      " << endl;
    cout << "                                                                                          Would you like to play again? Enter 1 for Yes, 2 to return to the Word Scramble menu:                " << endl;
    cout << "                                                                                                                                                                      " << endl;
    cout << "                                                                       \033[38;5;117╚══════════════════════════════════════════════ ⋆★⋆ ══════════════════════════════════════════════╝  \033[0m                                                     " << endl;
    cout << "                                                                                                                                                                      " << endl;
    cout << "                                                                                                                                                                      " << endl;
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
        cout << "                                          \033[38;5;159m            ██     ██  ██████  ██████  ██████      ███████  ██████ ██████   █████  ███    ███ ██████  ██      ███████\033[0m          " << endl;
        cout << "                                           \033[38;5;117m           ██     ██ ██    ██ ██   ██ ██   ██     ██      ██      ██   ██ ██   ██ ████  ████ ██   ██ ██      ██  \033[0m             " << endl;
        cout << "                                            \033[38;5;33m          ██  █  ██ ██    ██ ██████  ██   ██     ███████ ██      ██████  ███████ ██ ████ ██ ██████  ██      █████ \033[0m           " << endl;
        cout << "                                            \033[38;5;27m          ██ ███ ██ ██    ██ ██   ██ ██   ██          ██ ██      ██   ██ ██   ██ ██  ██  ██ ██   ██ ██      ██    \033[0m           " << endl;
        cout << "                                             \033[38;5;18m          ███ ███   ██████  ██   ██ ██████      ███████  ██████ ██   ██ ██   ██ ██      ██ ██████  ███████ ███████ \033[0m         " << endl;
        cout << "                                                                                                                                                                      " << endl;
        cout << "                                     \033[38;5;27m     ╚══════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════╝\033[0m  " << endl;
        cout << "                                                                                                                                                                      " << endl;
        cout << "                                                           \033[38;5;27m         ╔═══════════════════════════════════《✧ 》════════════════════════════════════╗  \033[0m                       " << endl;
        cout << "                                                                                                                                                                      " << endl;
        cout << "                                                                          \033[38;5;117m      WELCOME TO WORD SCRAMBLE! CHOOSE ONE OF THE FOLLOWING: \033[0m                                   " << endl;
        cout << "                                                                                                                                                                      " << endl;
        cout << "                                                                                                                                                                      " << endl;
        cout << "                                                                                                                                                                      " << endl;
        cout << "                                                                                               \033[38;5;117m   1. Play the game\033[0m                                                         " << endl;
        cout << "                                                                                \033[38;5;27m               __________________________  \033[0m                                                " << endl;
        cout << "                                                                                                                                                                      " << endl;
        cout << "                                                                                              \033[38;5;117m      2. View rules  \033[0m                                                        " << endl;
        cout << "                                                                               \033[38;5;27m              ______________________________  \033[0m                                              " << endl;
        cout << "                                                                                                                                                                      " << endl;
        cout << "                                                                                           \033[38;5;117m    3. Back to Game Selection \033[0m                                                 " << endl;
        cout << "                                                                                                                                                                      " << endl;
        cout << "                                                                                                                                                                      " << endl;
        cout << "                                                             \033[38;5;27m       ╚════════════════════════════════════《✧ 》═══════════════════════════════════╝  \033[0m                       " << endl;
        cout << "                                                                                                                                                                      " << endl;
        cout << "                                                                                                                                                                      " << endl;
        cout << "                                                                                                                                                                      " << endl;
        cout << "                                                                                                                                                                      " << endl;

        int choice;
        cin >> choice;

        if (choice == 1) {
            WordScrambleDifficulty(); // Leads to the menu to choose difficulty for Word Scramble
        }
        else if (choice == 2) {
            displayWordScrambleRules(); // Show the rules
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
    cout << "                                                                          \033[38;5;70m   ┌──────────────────────────── ⋆⋅☆⋅⋆ ──────────────────────────────┐ \033[0m              " << endl;
    cout << "                                                                                                                                                           " << endl;
    cout << "                                                                                                                                                           " << endl;
    cout << "                                                          \033[38;5;238m   ╒═══════════════════════════════════════════════════════════════════════════════════════════════╕ \033[0m " << endl;
    cout << "                                                                                                                                                            " << endl;
    cout << "                                                                                                                                                          " << endl;
    cout << "                                                                                               \033[38;5;34m   RULES OF WORD SCRAMBLE: \033[0m                                    " << endl;
    cout << "                                                                                                                                                          " << endl;
    cout << "                                                                                                                                                          " << endl;
    cout << "                                                                                  \033[38;5;243m   1. You will be given a scrambled word to guess. \033[0m                          " << endl;
    cout << "                                                                                                                                                          " << endl;
    cout << "                                                                    \033[38;5;64m   2. You have a limited number of incorrect guesses based on difficulty. \033[0m                 " << endl;
    cout << "                                                                                                                                                          " << endl;
    cout << "                                                                       \033[38;5;48m   3. The game ends when you guess the word or run out of attempts. \033[0m                    " << endl;
    cout << "                                                                                                                                                          " << endl;
    cout << "                                                                                  \033[38;5;243m   Press 0 to return to the Word Scramble menu. \033[0m                             " << endl;
    cout << "                                                                                                                                                          " << endl;
    cout << "                                                                                                                                                          " << endl;
    cout << "                                                                                                                                                          " << endl;
    cout << "                                                                                    \033[38;5;34m   EXAMPLE:  f o n a e t o r n  --->  afternoon \033[0m                        " << endl;
    cout << "                                                                                                                                                          " << endl;
    cout << "                                                                                                                                                              " << endl;
    cout << "                                                          \033[38;5;238m   ╘═══════════════════════════════════════════════════════════════════════════════════════════════╛ \033[0m " << endl;
    cout << "                                                                                                                                                          " << endl;
    cout << "                                                                                                                                                          " << endl;
    cout << "                                                                         \033[38;5;70m   └───────────────────────────── ⋆⋅☆⋅⋆ ─────────────────────────────┘ \033[0m               " << endl;
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
    cout << "                                                                          \033[38;5;27m    ╔════════════════════════════《✧ 》═══════════════════════════╗      \033[0m                                    " << endl;
    cout << "                                                                                                                                                                      " << endl;
    cout << "                                                          \033[38;5;27m   ╒═══════════════════════════════════════════════════════════════════════════════════════════════╕  \033[0m                     " << endl;
    cout << "                                                                                                                                                                      " << endl;
    cout << "                                                                                                \033[38;5;117m CHOOSE DIFFICULTY LEVEL\033[0m " << endl;
    cout << "                                                                                                                                                                      " << endl;
    cout << "                                                                                                                                                                      " << endl;
    cout << "                                                                                                \033[38;5;117m    1. Easy (5 attempts)\033[0m " << endl;
    cout << "                                                                                         \033[38;5;27m       ___________________________  \033[0m                                                    " << endl;
    cout << "                                                                                                                                                                      " << endl;
    cout << "                                                                                                  \033[38;5;117m 2. Medium (4 attempts)\033[0m " << endl;
    cout << "                                                                                            \033[38;5;27m   _____________________________   \033[0m                                                         " << endl;
    cout << "                                                                                                                                                                      " << endl;
    cout << "                                                                                                 \033[38;5;117m  3. Hard (3 attempts)\033[0m " << endl;
    cout << "                                                                                             \033[38;5;27m   ___________________________    \033[0m                                                        " << endl;
    cout << "                                                                                                                                                                      " << endl;
    cout << "                                                                                            \033[38;5;117m   4. Back to Word Scramble Menu\033[0m " << endl;
    cout << "                                                                                                                                                                      " << endl;
    cout << "                                                                                                                                                                      " << endl;
    cout << "                                                           \033[38;5;27m  ╘═══════════════════════════════════════════════════════════════════════════════════════════════╛    \033[0m                   " << endl;
    cout << "                                                                                                                                                                      " << endl;
    cout << "                                                                             \033[38;5;27m  ╚═══════════════════════════《✧ 》════════════════════════════╝         \033[0m                             " << endl;
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
        cout << "                                                                                                                                                                                   " << endl;
        cout << "                                                                                                                                                                                   " << endl;
        cout << "                                                                                                                                                                                   " << endl;
        cout << "                                                                                                                                                                                   " << endl;
        cout << "                                                                                                                                                                                   " << endl;
        cout << "                                                                                                                                                                                   " << endl;
        cout << "                                                                                                                                                                                   " << endl;
        cout << "                                                     \033[34m╒═══════════════════════════════════════════════════════════════════════════════════════════════════════════╕\033[0m" << endl;
        cout << "                                                                                                                                                                                  " << endl;
        cout << "                                                                                                                                                                                   " << endl;
        cout << "                                                                       \033[31m██████  ██████  ██████  ███████ ███████  ██████  ██████   ██████  ███████\033[0m                        " << endl;
        cout << "                                                                       \033[91m██     ██    ██ ██   ██ ██      ██      ██    ██ ██   ██ ██       ██\033[0m                             " << endl;
        cout << "                                                                       \033[38;5;202m██     ██    ██ ██   ██ █████   █████   ██    ██ ██████  ██   ███ █████\033[0m                    " << endl;
        cout << "                                                                       \033[38;5;214m██     ██    ██ ██   ██ ██      ██      ██    ██ ██   ██ ██    ██ ██\033[0m                       " << endl;
        cout << "                                                                       \033[33m██████  ██████  ██████  ███████ ██       ██████  ██   ██  ██████  ███████\033[0m                        " << endl;
        cout << "                                                                                                                                                                                   " << endl;
        cout << "                                                                                                                                                                                  " << endl;
        cout << "                                                     \033[34m╘═══════════════════════════════════════════════════════════════════════════════════════════════════════════╛                     " << endl;
        cout << "                                                                                                                                                                                  " << endl;
        cout << "                                                                                                                                                                                   " << endl;
        cout << "                                                                               \033[34m┌────────────────────────── ⋆⋅☆⋅⋆ ──────────────────────────┐\033[0m                                           " << endl;
        cout << "                                                                                                                                                                                  " << endl;
        cout << "                                                                                                   \033[38;5;214mWELCOME TO CODEFORGE!\033[0m                                                               " << endl;
        cout << "                                                                                                                                                                                  " << endl;
        cout << "                                                                                             \033[38;5;214m  Choose one of the following:\033[0m                                                            " << endl;
        cout << "                                                                                                                                                                                  " << endl;
        cout << "                                                                               \033[34m└────────────────────────── ⋆⋅☆⋅⋆ ──────────────────────────┘\033[0m                                            " << endl;
        cout << "                                                                                                                                                                                   " << endl;
        cout << "                                                                                                                                                                                  " << endl;
        cout << "                                                                                                                                                                                  " << endl;
        cout << "                                                                                           \033[34m╔═══════════════《✧ 》═══════════════╗\033[0m                                                      " << endl;
        cout << "                                                                                                                                                                                  " << endl;
        cout << "                                                                                                        \033[38;5;214m 1. PLAY\033[0m                                                                       " << endl;
        cout << "                                                                                                   \033[38;5;214m  ________________ \033[0m                                                                 " << endl;
        cout << "                                                                                                                                                                                  " << endl;
        cout << "                                                                                                     \033[38;5;214m  2. ABOUT US\033[0m                                                                     " << endl;
        cout << "                                                                                                   \033[38;5;214m __________________\033[0m                                                                 " << endl;
        cout << "                                                                                                                                                                                  " << endl;
        cout << "                                                                                                   \033[38;5;214m 3. EXIT THE GAME\033[0m                                                                   " << endl;
        cout << "                                                                                                                                                                                   " << endl;
        cout << "                                                                                           \033[34m╚═══════════════《✧ 》═══════════════╝\033[0m                                                       " << endl;
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
            cout << "                                                               ┌──────────────────────────── ⋆⋅☆⋅⋆ ──────────────────────────────┐ \033[0m                                   " << endl;
            cout << "                                                                                                                                                                    " << endl;
            cout << "                                                                            !!!Invalid choice. Please try again!!!               \033[0m                                        " << endl;
            cout << "                                                                                                                                                                    " << endl;
            cout << "                                                               └──────────────────────────── ⋆⋅☆⋅⋆ ──────────────────────────────┘  \033[0m                                  " << endl;
            
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
    cout << "                                                                                                   / \\                                                                " << endl;
    cout << "                                                                                                ╚═══════╝                                                            " << endl;
    cout << "                                                                                                                                                                     " << endl;
    cout << "                                                        ╘══════════════════════════════════════════════════════════════════════════════════════╛                  " << endl;
    cout << "                                                                                                                                                                     " << endl;
    break; // Exit the program
}
else {
    system("CLS");
            cout << "                                                                                                                                                      " << endl;
            cout << "                                                               ┌──────────────────────────── ⋆⋅☆⋅⋆ ──────────────────────────────┐  \033[0m                   " << endl;
            cout << "                                                                                                                                                      " << endl;
            cout << "                                                                        !!!Invalid choice. Please try again!!!                      \033[0m                   " << endl;
            cout << "                                                                                                                                                      " << endl;
            cout << "                                                               └──────────────────────────── ⋆⋅☆⋅⋆ ──────────────────────────────┘ \033[0m                     " << endl;

        }
    }
}

int main() {
    SetConsoleOutputCP(CP_UTF8); //include UTF-8 or Unicode characters 
    mainMenu();
}
