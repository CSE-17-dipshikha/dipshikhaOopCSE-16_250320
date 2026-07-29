#include <iostream>
using namespace std;

inline int square(int n)
{
    n*n;
}
int add(int a,int b = 10)
{
    a+b;
}
int calculate(int a,int b)
{
    return a+b;
}
int calculate(int a,int b,int c)
{
    return a+b+c;
}
double calculate(double a, double b)
{
    return a+b;
}
int main()
{
    // Inline Function
    cout << "Inline Function"<< endl;
    cout<<"Square of 5 ="<< square (5) << endl;

    cout<<"\nDefault Argument Function" << endl;
    
    // Default Argument
    cout << "Add (38) = " << add(5) << endl;
    cout << "Add (40,50) = " << add(40,50) << endl;

    // Function Overloading

    cout <<"\nFunction Overloading"<<endl;
    cout <<" Addition of two Integers ="<< "Calculate (10,20) = " << calculate(10, 20) << endl;
    cout  <<" Addition of three Integers =" << "Calculate (10,20,30) = " << calculate(10, 20, 30) << endl;
    cout  <<" Addition of two Integers ="<< "Calculate (5,5) = " << calculate(5.5, 4.5) << endl;

    return 0;
}

