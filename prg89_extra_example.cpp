#include <iostream>
#include <string.h>
using namespace std;
class batsman
{
    int bcode, innings, notout, run, batavg;
    char bname[20];

public:
    void readdata();
    int calcavg();
    void displaydata();
};
void batsman ::readdata()
{
    cout << "\n enter batsman code:";
    cin >> bcode;
    cout << "\n enter batsman name:";
    cin >> bname;
    cout << "\n enter batsman innings:";
    cin >> innings;
    cout << "\n enter notout:";
    cin >> notout;
    cout << "\n enter batsman run:";
    cin >> run;
}
int batsman::calcavg()
{
    batavg = run / (innings - notout);
    return batavg;
}
void batsman::displaydata()
{
    cout << "\n enter batsman code:" << bcode;
    cout << "\n enter batsman name:" << bname;
    cout << "\n enter batsman innings:" << innings;
    cout << "\n enter notout:" << notout;
    cout << "\n enter batsman run:" << run;
    cout << "\n batsman average:" << batavg;
}
int main()
{
    batsman b1[3];
    int i;
    for (i = 1; i <= 2; i++)
    {
        cout << "\n Batsman number: " << i << endl;
        b1[i].readdata();
        b1[i].calcavg();
    }
    for (i = 1; i <= 2; i++)
    {
        cout << "\nBatsman number: " << i << endl;
        b1[i].displaydata();
    }
    return 0;
}