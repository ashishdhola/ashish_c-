#include <iostream>
using namespace std;
class tata
{
public:
    tata()
    {
        cout << " i am tata,i bulid";
    }
};
class nexon : public tata
{
public:
    nexon()
    {
        cout << "nexon ev & nexon petrol";
    }
};
int main()
{
    nexon c1;
}