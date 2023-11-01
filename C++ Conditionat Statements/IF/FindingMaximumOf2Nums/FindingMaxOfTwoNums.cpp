#include <iostream>
using namespace std;

int main() { 
    int x, y;

    cin >> x;
    cin >> y;

    if(x > y){
        cout << "Maximum is " << x;
    } else { 
        cout << "Maximum is " << y;
    }

    return 0;
}