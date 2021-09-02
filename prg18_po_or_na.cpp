#include<iostream>
using namespace std;
int main()
{
    int a;
    cout << "enter a:";
    cin >> a;
    if(0>a)
    {
        cout << "number is nagitive:" << int(a);
    }
    else
    {
        cout << "number is posittive: " << int(a);
    }
}