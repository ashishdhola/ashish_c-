#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"enter a:";
    cin>>a;
    cout<<"enter b:";
    cin>>b;
    if(a<2000||a>3000)
    {
        cout<<"\n value a:"<<int(a);
    }
    if(b>100&&b<500)
    {
        cout<<"\n value b:"<<int(b);
    }
}