#include <iostream>
using namespace std;
class marks
{
    float sub1, sub2, sub3;

public:
    marks(float a, float b, float c)
    {
        sub1 = a;
        sub2 = b;
        sub3 = c;
        cout << "\nnirav marks:"
             << "\tmath:" << sub1 << "\tsci:" << sub2 << "\teng:" << sub3;
        cout << "\n total:" << sub1 + sub2 + sub3;
        cout << "\n pr:" << (sub1 + sub2 + sub3) / 3;
    }
    marks(marks &newboj)
    {
        sub1 = newobj.sub1;
        sub2 = newobj.sub2;
        sub3 = newobj.sub3;
        cout << "\n ashish marks:"
             << "\tmath:" << sub1 << "\tsci:" << sub2 << "\teng:" << sub3;
        cout << "\n total:" << sub1 + sub2 + sub3;
        cout << "\n pr:" << (sub1 + sub2 + sub3) / 3;
    }
};
int main()
{
    marks nirav(77, 85, 75);
    marks ashish(nirav);
    return 0;
}
