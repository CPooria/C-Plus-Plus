#include <iostream>
using namespace std;
int main()
{
    int charCount = 0, wordCount = 0;
    char ch;
    cout << "Enter a statement (and then press ENTER key):";
    while ((ch = cin.get()) != '\n')
    {
        charCount++;
        if (ch == ' ')
            wordCount++;
    }
    cout << "Character count is " << charCount << " and Word count is " << wordCount + 1 << ".";
    cin.get();
}