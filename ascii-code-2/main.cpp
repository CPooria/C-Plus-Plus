#include <iostream>
using namespace std;
int main()
{
    int i;
    char ch;
    for (i = 33; i <= 126; i++)
    {
        ch = i;
        cout << i << "=" << ch << "  ";
        if ( i % 5 == 0)
            cout << endl;
    }
    cin.get();
}