/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;

int main() {
    int num1,num2;

    cout << "Enter the first number: ";
    cin >> num1;
        cout << " Enter the second number:";
        cin>>num2;
        if(num1 > num2)
    cout<< num1 << " is larger."<<endl;
    else if(num2 > num1)
    cout << num2 << "is larger." <<endl;
    else 
        cout << "Both are equal." << endl;
     
    return 0;
}