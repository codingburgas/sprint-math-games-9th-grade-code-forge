#include <iostream>
using namespace std;

int main(){
    int choice;
    cout << "//////////////////////////////////////////////\n";
    cout << "/                                            /\n";
    cout << "/    1. Game 1                               /\n";
    cout << "/    2. Game 2                               /\n";
    cout << "/    3. Game 3                               /\n";
    cout << "/    0. Exit                                 /\n";
    cout << "/                                            /\n";
    cout << "/                                            /\n";
    cout << "//////////////////////////////////////////////\n";


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
    }
}