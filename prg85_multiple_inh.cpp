//multipal
#include <iostream>
using namespace std;
class tata
{
public:
    tata()
    {
        cout << "\n Nexon";
    }
};
class battery
{
public:
    battery()
    {
        cout << "\n battery &";
    }
};
class steel
{
public:
    steel()
    {
        cout << "\n Steel used in";
    }
};

class nexon : public battery, public steel, public tata
{
public:
    nexon()
    {
        cout << "\n I am tata";
    }
};
int main()
{
    nexon c1;
}
