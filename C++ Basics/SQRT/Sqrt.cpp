#include <iostream>
using namespace std;

int main() { 
    float a, b, c, root2; 
    cin >> a >> b >> c;

    root2 = (-b + (b*b - 4 * a * c)) / (2 * a);

    cout << "Radacina patrata este = " << root2; 

    return 0;
}