#include <iostream>
#define PI 3.14
using namespace std;
int main()
{
    int radius;
    float area, prime;
    cout << "Enter the radius of circle: ";
    cin >> radius;
    area = PI * radius * radius;
    prime = 2 * PI * radius;
    cout << "area of the circle is " << area << " and prime of the circle is " << prime << ".";
    cin.get();
}