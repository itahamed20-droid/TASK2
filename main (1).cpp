/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <iostream>
using namespace std;

int main() {
    int num1, num2, num3;

    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter second number: ";
    cin >> num2;

    cout << "Enter third number: ";
    cin >> num3;

    int sum = num1 + num2 + num3;
    int difference = num1 - num2 - num3; 
    int product = num1 * num2 * num3;

    cout << "Sum (Addition): " << num1 << " + " << num2 << " + " << num3 << " = " << sum << endl;
    cout << "Difference (Subtraction): " << num1 << " - " << num2 << " - " << num3 << " = " << difference << endl;
    cout << "Product (Multiplication): " << num1 << " * " << num2 << " * " << num3 << " = " << product << endl;

    return 0;
}