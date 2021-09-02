#include <iostream>
using namespace std;
int main()
{
    int i, j, sp = 40;
    i = 1;
    while (i >= 1)
    {
        j = 1;
        while (j <= i)
        {
            cout << "*";
            j++;
        }
        cout << "\n";
        i--;
    }
}


