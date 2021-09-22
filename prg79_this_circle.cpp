#include <iostream>
using namespace std;
class con
{
    int r, l, w, h;

public:
    void get_data();
    int get_choice();
    float circle();
    float triangle();
    float rectangle();
};
void con::get_data()
{
    cout << "MENU:" << endl;
    cout << "1.area of circle" << endl;
    cout << "2.area of triangle" << endl;
    cout << "3.area of rectengle" << endl;
    cout << "4.EXIT" << endl;
    cout << "enter your choice:" << endl;
}
int con::get_choice()
{
    int choice;
    do
    {
        get_data();
        cin >> choice;
        switch (choice)
        {
        case 1:
            cout << "enter r:" << endl;
            cin >> r;
            cout << "area fo circle is:" << circle() << endl;
            break;
        case 2:
            cout << "enter h and w:" << endl;
            cin >> h >> w;
            cout << "area of triangle:" << triangle() << endl;
            break;
        case 3:
            cout << "enter l and w" << endl;
            cin >> l >> w;
            cout << "area of rectengle is:" << rectangle() << endl;
            break;
        }
    } while (choice != 3);
    return 0;
}
float con::circle()
{
    return 3.14 * r * r;
}
float con::triangle()
{
    return 0.5 * h * w;
}
float con::rectangle()
{
    return l * w;
}
int main()
{
    con m1;
    m1.get_choice();
}