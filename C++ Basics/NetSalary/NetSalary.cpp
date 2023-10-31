#include <iostream>
using namespace std;


int main() {

    double basicSalary;
    double percentageAllowances; 
    double percentageDeductions;
    double formula;

    cout << "Basic Salary: ";
    cin >> basicSalary; 
   
    cout << "Percentage Allowances ";
    cin >> percentageAllowances; 
    
    cout << "Percentage Deductions: ";
    cin >> percentageDeductions; 

    formula = (int) basicSalary + basicSalary * percentageAllowances - basicSalary * percentageDeductions;
    cout << formula;

    return 0;

}