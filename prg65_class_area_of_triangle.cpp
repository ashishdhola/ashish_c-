//areas of triangle
#include <iostream>
using namespace std;
class aot
{
    float w, h;

public:
    void set_val(int a, int b)
    {
        w = a;
        h = b;
    }
    float do_aot()
    {
        return 0.5 * w * h;
    }
};
int main()
{
    aot obj1;
    obj1.set_val(5, 3);

    cout << "\naot =" << obj1.do_aot();
}