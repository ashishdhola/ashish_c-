#include<iostream>
using namespace std;
int main()
{
    int i;
    for (i = 1; i <= 50;i++)
    {
        if(i%2==1)
            cout <<"\nodd"<<int(i) ;
            else
                cout << "\n even" << int(i);
    }
}