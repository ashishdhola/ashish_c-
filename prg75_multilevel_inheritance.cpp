#include <iostream>
using namespace std;
class tata
{
public:
    tata()
    {
        cout << " i am tata,i manufactiring ";
    }
};
class steel : public take_data
{
public:
    steel()
    {
        cout << "\n steel used in";
    }
};
class nexon : public steel
{
public:
    nexon()
    {
        cout << "\n nexon nv & nexon petrol";
    }
};
int main()
{
    nexon c1;
}