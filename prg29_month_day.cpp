#include<iostream>
using namespace std;
int main()
{
    int month;
    cout << "enter month:";
    cin >> month;
    if(month==1||month==3||month==5||month==7||month==8||month==10||month==12)
    {
        cout << "31 day in this month:" << int(month);
    }
    else if(month==4||month==6||month==9||month==11)
    {
        cout << "30 day in this month:" << int(month);
    }
    else
    {
        cout << "28 or 29 day in this month:" << int(month);
    }
    return 0;
}