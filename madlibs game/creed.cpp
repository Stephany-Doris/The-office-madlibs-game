#include <iostream>
using namespace std;

void creed(){
    string name, body, property, description;
    
    cout << "Enter a name of someone in the group" << endl;
    cin >> name;
    
    cout << "Enter a body part(singular)" << endl;
    cin >> body;
    
    cout << "Enter sth you own/have(plural)" << endl;
    cin >> property;
    
    cout << "Enter an adjective" << endl;
    cin >> description;

    cout << "Hey " << name << ", heard you're having " << body << " problems." << endl;
    cout << "Listen, I've got the answer. You declare bankruptcy, all your " << property << " go away. " << description << " Creed bratton has never declared bankruptcy. When "<< description <<" Creed braton gets in trouble, he transfers all his " << property << " to William Charles Schneider"<< endl;
}
