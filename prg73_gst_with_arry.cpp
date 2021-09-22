//gst_with_array
#include <iostream>
using namespace std;
class bill
{
    int pro, qtu, rate;

public:
    void get_data();
    int total();
    float gst();
    float total_amo();
    int data();
    int print();
    int do_pro();
};
void bill::get_data()
{
    cout << "\n enter product:";
    cin >> pro;
    cout << "\n enter qtu:";
    cin >> qtu;
    cout << "\n enter rate:";
    cin >> rate;
}
int bill::total()
{
    return qtu * rate;
}
float bill::gst()
{
    return (qtu * rate) * 0.12;
}
float bill::total_amo()
{
    return (qtu * rate) * 1.12;
}
int bill::data()
{
    return qtu;
}
int bill::print()
{
    return rate;
}
int bill::do_pro()
{
    return pro;
}
int main()
{
    bill b1[3];
    int i;
    for (i = 0; i < 3; i++)
    {
        b1[i].get_data();
    }
    /*cout << "\n total:" << b1.total();
        cout << "\n gst:" << b1.gst();
        cout << "\n total_amo:" << b1.total_amo();*/
    cout << "\n--------------------------------------------------------";
    cout << "\nproduct qtu     rate    total    gst    total_amo";
    for (i = 0; i < 3; i++)
    {
        cout << "\n"
             << b1[i].do_pro() << "\t" << b1[i].data() << "\t" << b1[i].print() << "\t" << b1[i].total() << "\t" << b1[i].gst() << "\t" << b1[i].total_amo();
    }
    cout << "\n-----------------------------------------------------";
    return 0;
}
