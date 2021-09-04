//area of cirale
#include <iostream>
using namespace std;
class aoc
{
    float x;

public:
    void set_val(int a)
    {
        x = a;
    }
    float do_aoc()
    {
        return 3.14 * x * x;
    }
};
int main()
{
    aoc obj1;
    obj1.set_val(5);
    cout << "\npr =" << obj1.do_aoc();
}