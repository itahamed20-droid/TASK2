/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;

int main() {
    int marks;

    cout << "Enter marks(0-100) ";
    cin >> marks;
    if(marks>=90)
        cout << "Grade:A"<<endl;
        else if (marks>=75)
    cout<< " Grade:B"<<endl;
    else if(marks>=60)
    cout << "Grade:C" <<endl;
    else if(marks>=40) 
        cout << "Grade:D" << endl;
     else
     cout<<"Grade:Fail"<<endl;
    return 0;
}