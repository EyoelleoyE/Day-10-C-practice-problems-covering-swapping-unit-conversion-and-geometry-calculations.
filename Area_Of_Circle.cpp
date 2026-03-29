#include <iostream>

using namespace std;

#define pi 3.14 

int main()
{
    double A,r;
    cout<<"Enter the radius of the circle to calculate Area: ";
    cin>>r;
    A = pi * r*r;
    cout<<endl;
    cout<<"The Area of the circle is: "<<A;
    return 0;
}