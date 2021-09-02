// to print  total of too sum\
//      25
//      30
//
#include<iostream>
using namespace std;
int main()
{
	int i,sum=0,total=0;
	for(i=1;i<=10;i++)
	{
		if(i%2)
		sum=sum+i;
		else
		total=total+i;
	}
	cout<<""<<sum;
	cout<<" "<<total<<endl;

}
