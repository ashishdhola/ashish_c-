// to print *
//          **
//          ***
//          ****
//          *****
#include <iostream>
using namespace std;
int main()
{
    int a, b;
    for (a = 1; a <= 6; a++)
    {
        for (b = 1; b <= a; b++)
        {
            printf("*");
        }
        cout<<endl;
    }
    
}