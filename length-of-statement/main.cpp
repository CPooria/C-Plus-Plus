#include <iostream>
using namespace std;
int main()
{
    int count;
    cout << "Enter a statement and then press ENTER key: " << endl;
    for (count =0; cin.get() != '\n'; count++);
    cout << "Length of statement is " << count << " charchter.";
    cin.get();
}
