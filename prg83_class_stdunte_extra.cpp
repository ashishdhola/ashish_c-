#include <iostream>
using namespace std;
class student
{
    int adm_no;
    string sname;
    float eng, math, science, total;

public:
    int take_data();
    int ctotal();
    int show_data();
};
int student::take_data()
{
    cout << "\nEnter admno=>";
    cin >> adm_no;
    cout << "\nEnter sname=>";
    cin >> sname;
    cout << "\nEnter marks of eng =>";
    cin >> eng;
    cout << "\nEnter marks of math=>";
    cin >> math;
    cout << "\nEnter marks of science=>";
    cin >> science;
1234}
int student::ctotal()
{
    total = eng + math + science;
    cout << "\ntotal:" << total;
    return total;
}
int student::show_data()
{
    cout << "\nEnter admno=>" << adm_no;
    cout << "\nEnter sname=>" << sname;
    cout << "\nEnter marks of eng =>" << eng;
    cout << "\nEnter marks of math=>" << math;
    cout << "\nEnter marks of science=>" << science;
    cout << "\ntotal:" << total;
}
int main()
{
    student s1;
    s1.take_data();
    s1.ctotal();
    s1.show_data();
    return 0;
}