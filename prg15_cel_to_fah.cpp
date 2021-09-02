#include<iostream>
using namespace std;
int main()
{
    float celsius, fahrenheit;
    cout << "enter celsius:";
    cin >> celsius;
    fahrenheit = (celsius * 9 / 5) + 32;
    cout << "fahrenheit:" << fahrenheit;
}