// to print a,b,c,d;
// 'a'to 'z'
#include<iostream>
using namespace std;
int main()
{
	char ch='a',sp=40,i,j;
	for(i=5;i>=1;i--)
	{
		for(j=1;j<=sp;j++)
		cout<<" ";
		for(j=1;j<=i;j++)
		{
		cout<<" "<<ch++;
		}
		cout<<endl;
		sp++;
	}
}