#include<iostream>
using namespace std;
int main()
{
    float math,sci,eng,guj,total,pr;
    cout<<"enter marks for math& sci& eng& guj:";
    cin>>math>>sci>>eng>>guj;
    total=math+sci+eng+guj;
    cout<<"\n total:"<<float(total);
    pr=total/4;
    cout<<"\n pr:"<<float(pr);
    if(pr>80)
    {
        cout<<"\n your grade is A";
    }
    else if(pr>70)
    {
        cout<<"\n your grade is B";
    }
    else if(pr>60)
    {
        cout<<"\n your grade is C";
    }
    else if(pr>50)
    {
        cout<<"\n your grade is D";
    }
    else if(pr>40)
    {
        cout<<"\n your grade is pass";
    }
    else 
    {
        cout<<"\n you are fail";
    }
}