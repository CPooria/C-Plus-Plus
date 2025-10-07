#include <iostream>
#define PI 3.14
using namespace std;
int main()
{
    auto lang = "C++";
    int radius;
    cout << "Please enter the radius of circle: ";
    cin >> radius;
    float area = PI * radius * radius;
    float prime = 2 * PI *radius;
    cout << "The area of circle is: " << area << endl;
    cout << "The prime of circle is: " << prime << endl;
    cin.get();
    cin.get();
}