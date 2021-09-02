#include<iostream>
using namespace std;
int main()
{
    char ch;
    cout << "enter char:";
    cin >> ch;
    if(ch>=97)
    {
        cout << "char is capitle:" << char(ch - 32);
    }
    else
    {
        cout << "char is samll:" << char(ch + 32);
    }
}