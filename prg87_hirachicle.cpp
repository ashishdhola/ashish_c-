#include <iostream>
using namespace std;
class solt
{
public:
    solt()
    {
        cout << "\n I am selling solt";
    }
};
class battery
{
public:
    battery()
    {
        cout << "\n i'm selling battery ";
    }
};
class steel
{
public:
    steel()
    {
        cout << "\n i'm selling Steel";
    }
};

class tata : public battery, public steel, public solt
{
public:
    tata()
    {
        cout << "\n Everyone call me Tata";
    }
};
int main()
{
    tata c1;
}