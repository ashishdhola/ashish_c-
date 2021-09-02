#include<iostream>
using namespace std;
int main()
{
    float gs,bs,hra,da;
    cout<<"enter basic salary:";
    cin>>bs;
    if(bs<=5000)
    {
        
        hra=bs*0.08;
        da=bs*0.20;
        gs=bs+hra+da;    
    }
    else if(bs>=5001&&bs<=10000)
        {
            hra=bs*0.12;
            da=bs*0.30;
            gs=bs+hra+da;
        }
    else if(bs>=10001&&bs<=15000)
        {
            hra=bs*0.15;
            da=bs*0.40;
            gs=bs+hra+da;
        }
    else
    {
        hra=bs*0.20;
        da=bs*0.50;
        gs=bs+hra+da;
    }
    cout<<"\n your hra:"<<float(hra);
    cout<<"\n your da:"<<float(da);
    cout<<"\n your gross salary is:"<<float(gs);
}