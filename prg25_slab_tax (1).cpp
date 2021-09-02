#include<iostream>
using namespace std;
int main()
{
    float s,tax,t_s;
    cout<<"enter your slab:";
    cin>>s;
    if(s<=2500)
    {
        tax=s*0;
        t_s=s+tax;
    }
    else if(s>=2500&&s<=5000)
    {
        tax=s*0.10;
        t_s=s+tax;
    }
    else if(s>=5000&&s<=10000)
    {
        tax=s*0.20;
        t_s=s+tax;
    }
    else
    {
        tax=s*0.30;
        t_s=s+tax;
    }
    cout<<"\n tax:"<<float(tax);
    cout<<"\n total slab:"<<float(t_s);
}
