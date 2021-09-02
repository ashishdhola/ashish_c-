#include<iostream>
using namespace std;
int main()
{
    char ch;
    for (ch = 'A'; ch <= 'Z';ch++)
    if(ch%2==1)
        cout << " " << char(ch);
    else
        cout << " " << char(ch+32);
}