#include <iostream>
using namespace std;
int main()
{
    char ch;
    for (ch = 'z'; ch >= 'a'; ch--)
        cout << "  " << char(ch);
}