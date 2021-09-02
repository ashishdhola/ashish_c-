#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"enter a:";
    cin>>a;
    cout<<"enter b:";
    cin>>b;
    c=a%b;
    if(c==0)
    {
        cout<<"\n ais divisible by b";
    }
    else
    {
        cout<<"\n a is not divisible by b";
    }
}