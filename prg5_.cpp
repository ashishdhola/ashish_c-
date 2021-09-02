#include<iostream>
using namespace std;
int main()
{
    float s, p, t;
    cout << "\n enter the distance:";
    cin >> p;
    cout << "\n enter the time:";
    cin >> t;
    s = (p / t * 60);
    cout << "\nyour speed is:" << s;
}