#include<iostream>
using namespace std;
int main()
{
    int a;
    cout << "enter a:";
    cin >> a;
    if(a%2==0)
    {
        cout << "a is even:"<<int(a);
    }
    else
    {
        cout << "a is odd:"<<int(a);
    }
}