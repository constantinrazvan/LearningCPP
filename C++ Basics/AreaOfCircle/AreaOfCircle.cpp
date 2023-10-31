#include <iostream> 
#include <cmath>
using namespace std;

int main() { 
    float r, pi = 3.14;
    double a;

    cout << "Radius = ";
    cin >> r; 

    a = pi * pow(r, 2);

    cout << a;

    return 0;
}