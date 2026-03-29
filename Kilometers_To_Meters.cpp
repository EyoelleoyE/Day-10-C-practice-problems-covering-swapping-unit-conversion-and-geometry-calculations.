#include <iostream>

using namespace std;

int main()
{
    double k,m;
    cout<<"Enter in kilometers to convert it to meters: ";
    cin>>k;
    m = (1000) * k;
    cout<<endl;
    cout<<"When "<<k<<" km is converted into meters, it will be "<<m<<" m.\n\n";
    return 0;
}