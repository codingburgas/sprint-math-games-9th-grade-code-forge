#include <iostream>
//#include <cstdlib> recommended to be used
//#include <ctime> recommended to be used
using namespace std;

 
void GAMENUMBER1();
void GAMENUMBER2();
void mainMenu() {
    int choice;
    while (true) {
        cout << "Welcome to the Mini-Game Menu!" << endl;
        cout << "Please choose an option:" << endl;
        cout << "1. Play Mini-Games" << endl;
        cout << "2. Exit" << endl;
        cout << "Enter your choice (1 or 2): ";
        cin >> choice;
        if (choice == 1) {
            int miniGameChoice;
            while (true) {
                cout << "\nMini-Game Menu:" << endl;
                cout << "1. GAMENUMBER1" << endl;
                cout << "2. GAMENUMBER2" << endl;
                cout << "3. Back to Main Menu" << endl;
                cout << "Enter your choice (1-3): ";
                cin >> miniGameChoice;
                switch (miniGameChoice) {
                    case 1:
                        GAMENUMBER1();
                        break;
                    case 2:
                        GAMENUMBER2();
                        break;
                    case 3:
                        break; // Go back to the main menu
                    default:
                        cout << "Invalid choice. Please try again." << endl;
                }
                if (miniGameChoice == 3) {
                    break; // Exit mini-game menu
                }
            }
        } else if (choice == 2) {
            cout << "Thank you for playing! Goodbye!" << endl;
            break; // Exit the program
        } else {
            cout << "Invalid choice. Please try again." << endl;
        }
    }
}
void GAMENUMBER1() {
    cout << "INPUT THE FIRST GAME HERE" << endl;
 
}
void GAMENUMBER2() {
    cout << "INPUT THE SECOND GAME HERE" << endl;
}
int main() {
    mainMenu();
}