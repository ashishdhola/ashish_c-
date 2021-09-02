// to print samll 'abcd' revrse
#include<iostream>
using namespace std;
int main()
{
	char ch='z',i,j;
	for(i=5;i>=1;i--)
	{
	for(j=1;j<=i;j++)
		{
		cout<<" "<<ch--;
		}
		cout<<endl;
	}
} 