#include<iostream>
using namespace std;
int main()
{
    char ch;
    for (ch = 'a'; ch <= 'z';ch++)
    {
        cout <<char(ch)<< " " << int(ch)<<endl;
    }
}