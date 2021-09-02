#include<iostream>
using namespace std;
int main()
{
    int man;
    cout<<"enter man age:";
    cin>>man;
    if(man>18)
    {
        cout<<"man eligible for voting:"<<int(man);
    }
    else
    {
        cout<<"man not eligible for voting:"<<int(man);
    }

}