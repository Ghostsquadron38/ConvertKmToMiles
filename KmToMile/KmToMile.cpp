#include <iostream>

using namespace std;

int main()
{
    const float p=1.609344;
    float m,km;
    cout << "Input the distance in kilometers: "; cin>>km;
    m = km/p;
    cout << "The distance in miles: "<<m;
    return 0;
}
