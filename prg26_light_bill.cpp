#include<iostream>
using namespace std;
int main()
{
    float unit, finle_bill;
    cout << "enter unit:";
    cin >> unit;
    if(unit<=100)
    {
        finle_bill = unit * 0.60 + 50;
    }
    else if(unit>=101&&unit<=300)
    {
        finle_bill = 110 + (unit - 100) * 0.80;
    }
    else
    {
        finle_bill = 270 + (unit - 300) * 0.90;
    }
    if(unit>=300)
    {
        finle_bill = finle_bill * 1.15;
    }
    cout << "\n your unit:" << float(unit);
    cout << "\tyour total bill:" << float(finle_bill);
}
