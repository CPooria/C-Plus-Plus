#include <iostream>
using namespace std;
int main()
{
    int num, digit;
    while (true)
    {
        cout << "Enter a number: ";
        cin >> num;
        cout << "inverse number is ";
        do
        {
            digit = num % 10;
            cout << digit;
            num /= 10;
        } while (num != 0);
        cout << "." << endl;
    }
}