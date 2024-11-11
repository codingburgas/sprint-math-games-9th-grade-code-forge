#include <iostream>
using namespace std;

void banner(){
    cout << " _____ _____ ____  _____    _____ _____ _____ _____ _____ " << endl;
    cout << "|     |     |    \\|   __|  |   __|     | __  |   __|   __|" << endl;
    cout << "|   --|  |  |  |  |   __|  |   __|  |  |    -|  |  |   __|" << endl;
    cout << "|_____|_____|____/|_____|  |__|  |_____|__|__|_____|_____|" << endl;
}


int main(){
    banner();
    int choice;
    cout << endl;
    cout << "----------------------------------------------\n";
    cout << "|                                            |\n";
    cout << "|    1. Game 1                               |\n";
    cout << "|    2. Game 2                               |\n";
    cout << "|    3. Game 3                               |\n";
    cout << "|    0. Exit                                 |\n";
    cout << "|                                            |\n";
    cout << "|                                            |\n";
    cout << "----------------------------------------------\n";


    cout << "Select your choice: ";
    cin >> choice;
    if (choice >= 3) {
        cout << "Invalid input!\n";
        main();
    } else if (choice == 0){
        //break;
        return 0;
    }
    switch(choice){
        case 1:{
            cout << "Choice 1 selected\n";
            main();
        }
        case 2:{
            cout << "Choice 2 selected\n";
            main();
        }
        case 3:{
            cout << "Choice 3 selected\n";
            main();
        }
    }
}