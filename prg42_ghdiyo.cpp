#include<iostream>
using namespace std;
int main()
{
    int num, a;
    cout << "enter number:";
    cin >> num;
    for (a = 1; a <= 10;a++)
        cout << endl<< int(num) << " : " << int(a) << " : " << int(num * a);
}