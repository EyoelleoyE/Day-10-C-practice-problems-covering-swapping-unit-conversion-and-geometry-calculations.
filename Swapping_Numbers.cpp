#include <iostream>

using namespace std;

int main()
{
    double a,b;
    cout<<"Enter the first number, a: ";
    cin>>a;
    cout<<"Enter the second number, b: ";
    cin>>b;

    a = a + b;
    b = a - b;
    a = a - b;

    cout<<"\n";
    cout<<"After swapping a becomes "<<a;
    cout<<endl;
    cout<<"And b becomes "<<b;
    return 0;
}