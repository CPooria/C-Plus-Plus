#include <iostream>
using namespace std;
int main()
{
    char ch;
    int code;
    cout << "ASCII Table:" << endl;
    for ( ch = 'a'; ch <= 'z'; ch++)
    {
        code = ch;
        cout << ch << " = " << code << endl;
    }
    cin.get();
}