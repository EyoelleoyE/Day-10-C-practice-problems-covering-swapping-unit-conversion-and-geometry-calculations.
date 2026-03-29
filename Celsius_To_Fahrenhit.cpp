#include <iostream>

using namespace std;

int main()
{
   double c,f;
    cout<<"Enter a celsius value to convert it into fahrenheit: ";
    cin>>c;
    cout<<endl;
    f = (c * 9/5) + 32;
    cout<<"When "<<c<<" C is converted to fahrenheit, it becomes "<<f<<" F";
    return 0;
}