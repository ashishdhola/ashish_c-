//marksheet_with_array
#include <iostream>
using namespace std;
class con
{
    int roll, sub1, sub2, sub3;

public:
    void get_data();
    int total();
    float pr();
    int do_sub1();
    int do_sub2();
    int do_sub3();
    int do_roll();
};
void con::get_data()
{
    cout << "\n enter roll_no:";
    cin >> roll;
    cout << "\n enter marks of math:";
    cin >> sub1;
    cout << "\n enter marks of sci:";
    cin >> sub2;
    cout << "\n enter marks of eng:";
    cin >> sub3;
}
int con::total()
{
    return sub1 + sub2 + sub3;
}
float con::pr()
{
    return (float)(sub1 + sub2 + sub3) / 3;
}
int con::do_sub1()
{
    return sub1;
}
int con::do_sub2()
{
    return sub2;
}
int con::do_sub3()
{
    return sub3;
}
int con::do_roll()
{
    return roll;
}
int main()
{
    con m1[3];
    int i;
    for (i = 0; i < 3; i++)
    {
        m1[i].get_data();
    }
    cout << "\nroll_no math    sci     eng    total    pr";
    for (i = 0; i < 3; i++)
    {
        cout << "\n"
             << m1[i].do_roll() << "\t" << m1[i].do_sub1() << "\t" << m1[i].do_sub2() << "\t" << m1[i].do_sub3() << "\t" << m1[i].total() << "\t" << m1[i].pr();
    }
}