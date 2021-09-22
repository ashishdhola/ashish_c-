#include <iostream>
using namespace std;
class test
{`
    int testcode, no_candidate, centerreqd;
    string description;

public:
    void schedule();
    int calcntr();
    void disptest();
};
void test::schedule()
{
    cout << "\n enter test code:";
    cin >> testcode;
    cout << "\n enter description:";
    cin >> description;
    cout << "\n enter a number of candidates:";
    cin >> no_candidate;
}
int test::calcntr()
{
    centerreqd = (no_candidate / 100 + 1);
    return centerreqd;
}
void test::disptest()
{
    cout << "\n enter test code:" << testcode;
    cout << "\n enter description:" << description;
    cout << "\n enter a number of candidates:" << no_candidate;
    cout << "\n senter requred:" << centerreqd;
}
int main()
{
    test t1;
    t1.schedule();
    t1.calcntr();
    t1.disptest();
    return 0;
}