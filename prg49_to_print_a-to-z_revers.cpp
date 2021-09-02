// to print capital  'abcd' revrse
#include<iostream>
using namespace std;
int main()
{
	char ch='Z',i,j;
	for(i=5;i>=1;i--)
	{
	for(j=1;j<=i;j++)
		{
		cout<<" "<<ch--;
		}
		cout<<endl;
	}
}