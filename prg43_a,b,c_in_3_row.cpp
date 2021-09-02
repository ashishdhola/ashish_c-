// to print   a,b,c
//	      d,e,f
//	      g,h,i.....;
#include<iostream>
using namespace std;
int main()
{
	char ch;
	for(ch=65;ch<=90;ch++)
    {	
        if(ch%3==2)
        {
            cout<<endl;
            cout<<" "<<char(ch);
        }
    }
	cout<<" "<<char(ch);
}