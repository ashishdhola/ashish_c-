#include <iostream>
using namespace std;
void showchoice();
float add(float, float);
float subtrack(float, float);
float multiply(float, float);
float divide(float, float);
int main()
{
    float x, y;
    int choice;
    do
    {
        showchoice();
        cin >> choice;
        switch (choice)
        {
        case 1:
            cout << "Enter two numbers=";
            cin >> x >> y;
            cout << "sum" << add(x, y) << endl;
            break;
        case 2:
            cout << "Enter two numbers=";
            cin >> x >> y;
            cout << " differece " << subtrack(x, y) << endl;
            break;
        case 3:
            cout << "Enter two numbers=";
            cin >> x >> y;
            cout << " product " << multiply(x, y) << endl;
            break;
        case 4:
            cout << "Enter two numbers=";
            cin >> x >> y;
            cout << "quotient" << divide(x, y) << endl;
            break;
        case 5:
            break;
        default:
            cout << "invalid input:" << endl;
        }
    } while (choice != 5);
    return 0;
}
void showchoice()
{
    cout << "menu" << endl;
    cout << "1.add" << endl;
    cout << "2.subtract" << endl;
    cout << "3.multiply" << endl;
    cout << "4.divide" << endl;
    cout << "5.exit" << endl;
    cout << "enter your choice:" << endl;
}
float add(float a, float b)
{
    return a + b;
}
float subtrack(float a, float b)
{
    return a - b;
}
float multiply(float a, float b)
{
    return a * b;
}
float divide(float a, float b)
{
    return a / b;
}

