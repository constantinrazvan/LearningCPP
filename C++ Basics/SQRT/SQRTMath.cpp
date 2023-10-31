#include <iostream>
#include <cmath>
using namespace std; 

int main() { 
    int a, b, c, r1;
    cin >> a >> b >> c;

    float root1; 

    root1 = (-b + sqrt(b * b + 4 * a * c)) / ( 2 * a);

    cout << "Radacina este= " << root1;

    return 0;
}