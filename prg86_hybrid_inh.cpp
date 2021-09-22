#include <iostream>
using namespace std;
class tata
{
public:
    tata()
    {
        cout << "\n I am Tata,i manufacturing";
    }
};
class battery : public tata
{
public:
    battery()
    {
        cout << "\n battery &";
    }
};
class steel : public tata
{
public:
    steel()
    {
        cout << "\n Steel used in";
    }
};

class nexon : public battery, public steel
{
public:
    nexon()
    {
        cout << "\n Nexon ev ";
    }
};
int main()
{
    nexon c1;
}