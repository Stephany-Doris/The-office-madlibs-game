#include <iostream>
using namespace std;

void creed();

int main() {
    int option;

    cout << "Welcome to The Office Madlibs Game!" << endl;
    
    do {
        cout << "Input option number to select character." << endl;

        cout << "1: Creed" << endl;
        cout << "0: Exit game" << endl;
        cin >> option;
        
        switch(option){
            case 1:
                creed();
                break;
            case 0:
                cout << "Exiting game!" << endl;
                break;
            default:
                cout << "User input is invalid!";
        }
    } while (option != 0);

    return 0;
}
