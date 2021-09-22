#include <iostream>
using namespace std;
class div_dosa
{
    int bill;
    string name;

public:
    static int count;
    div_dosa(string name, int bill)
    {
        this->name = name;
        this->bill = bill;
        count++;
    }
    void get_data()
    {

        cout << name << "-->" << bill << endl;
    }
};
int div_dosa::count;
int main()
{
    cout << "welcom to div_dosa" << endl;
    cout << "(name)  (bill)" << endl;
    div_dosa h("Ashish", 1111), h2("nirbhay", 2222), h3("umang", 3333), h4("axit", 30333), h5("nixit", 40333), h6("dixit", 50333), h7("laxit", 60333);
    h.get_data();
    h2.get_data();
    h2.get_data();
    h3.get_data();
    h4.get_data();
    h5.get_data();
    h6.get_data();
    h7.get_data();
    cout << "\n No. of costmber:" << div_dosa::count;
    return 0;
}
