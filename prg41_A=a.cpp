#include<iostream>
using namespace std;
int main()
{
    char ch;
    for (ch = 'A'; ch <= 'Z';ch++)
    {
        cout <<endl<< char(ch) << " : " << char(ch + 32);
    }
}