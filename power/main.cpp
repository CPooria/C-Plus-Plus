#include <iostream>
using namespace std;
int main()
{
    int a, b, i = 1, power = 1;
    cout << "Enter base as an integer: ";
    cin >> a;
    cout << "Enter exponent as an integer: ";
    cin >> b;
    while ( i <= b)
    {
        power *= a;
        ++i;
    }
    cout << a << " power " << b << " is " << power << ".";
    cin.get();
    cin.get();
}