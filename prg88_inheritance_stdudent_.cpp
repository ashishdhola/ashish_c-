#include <iostream>
#include <string.h>
using namespace std;
class student
{
private:
    int r1;
    char nm[20];

public:
    void read();
    void display();
};
class mark : public student
{
protected:
    int s1;
    int s2;
    int s3;

public:
    void getmarks();
    void putmarks();
};
class result : public mark
{
private:
    int t;
    float p;
    char div[10];

public:
    void process();
    void printresult();
};
void student ::read()
{
    cout << "Enter Roll no. =";
    cin >> r1;
    cout << "Enter Name=";
    cin >> nm;
}

void student ::display()
{
    cout << "\n Roll no." << r1 << endl;
    cout << "\n Name" << nm << endl;
    cout << "\n";
}

void mark ::getmarks()
{
    cout << "Enter mark for 3 subject : " << endl;
    cin >> s1 >> s2 >> s3;
}

void mark ::putmarks()
{
    cout << "subject 1" << s1 << endl;
    cout << "subject 2" << s2 << endl;
    cout << "subject 3" << s3 << endl;
}

void result ::process()
{
    t = s1 + s2 + s3;
    p = t / 3.0;
    p > 60 ? strcpy(div, "first") : p >= 50 ? strcpy(div, "second")
                                            : strcpy(div, "third");
}

void result ::printresult()
{
    cout << "total=" << t << endl;
    cout << "\n";
    cout << "percentage : " << p << endl;
    cout << "division :" << div << endl;
}

int main()
{
    result x;
    x.read();
    x.getmarks();
    x.process();
    x.display();
    x.getmarks();
    x.putmarks();
    x.process();
    x.printresult();
    return 0;
}