#include <iostream>
using namespace std;
int main()
{
    char ch;
    int code;
    for (ch = 'a';ch <= 'z'; ch++)
    {
        code = ch;
        cout << "character = "<< ch << " code = "<< code << endl;
    }
    cin.get();
}