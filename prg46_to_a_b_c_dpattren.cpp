// to print small a,b,c,d;
// 	       a
//         bc
//         def
//         ghij
//         klmnop
#include<iostream>
using namespace std;
int main()
{
	char ch='a',i,j;
	for(i=1;i<=5;i++)
	{
	for(j=1;j<=i;j++)
		{
		cout<<" "<<ch++;
		}
		cout<<endl;
	}
}