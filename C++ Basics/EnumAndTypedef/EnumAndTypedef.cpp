#include <iostream>
#include <string>
using namespace std;

enum Level {
    LOW = 1, 
    MEDIUM,
    HIGH
};

typedef string name;  

int main() { 

    enum Level level;
    level = MEDIUM;

    switch(level){
        case 1: 
            cout << "Level is easy";
            cout << endl << endl; 
            break;
        case 2:
            cout << "Level is medium";
                cout << endl << endl; 
            break;
        case 3: 
            cout << "Level is hard"; 
            cout << endl << endl; 
            break; 
    };

    name n_mom, n_dad, n_you;

    cout << "What is your dad's name? ";
    cin >> n_dad;

    cout << "What is your mom's name? ";
    cin >> n_mom;

    cout << "What is your name? ";
    cin >> n_you;

    cout << "Your family name are: "; 
    cout << "1. Yours = " << n_you;
    cout << "2. Your mom's name = " << n_mom;
    cout << "3. Your dad's name = " << n_dad;


    return 0;
}