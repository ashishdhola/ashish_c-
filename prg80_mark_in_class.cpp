#include <iostream>
using namespace std;
class students
{
    string name;
    int maths, physics, chemistry, computer, english, total, per, n;

public:
    students() {}
    students(int n_c, string name_c, int maths_c, int physics_c, int chemistry_c, int computer_c, int english_c)
    {
        n = n_c;
        name = name_c;
        maths = maths_c;
        physics = physics_c;
        chemistry = chemistry_c;
        computer = computer_c;
        english = english_c;
    }
    void calculate()
    {
        cout << "EnrollmentNo  is : " << n << endl;
        cout << "Student name is : " << name << endl;
        cout << "Marks in maths : " << maths << endl;
        cout << "Marks in physics : " << physics << endl;
        cout << "Marks in chemistry : " << chemistry << endl;
        cout << "Marks in computer : " << computer << endl;
        cout << "Marks in english : " << english << endl;
        total = maths + physics + chemistry + computer + english;
    }
    void percentage()
    {
        per = total / 5;
    }
    void result()
    {
        if (per >= 80)
        {
            cout << "\ngrade = A";
        }
        else if (per >= 65 && per < 80)
        {
            cout << "\ngrade = B";
        }
        else if (per >= 50 && per < 65)
        {
            cout << " \ngrade = C";
        }
        else if (per >= 33 && per < 50)
        {
            cout << "\ngrade = D";
        }
        else if (per < 33)
        {
            cout << "\ngrade = E";
        }
    }
    void display()
    {
        cout << "The total marks of student is : " << total << endl;
        cout << "Percentage of student is : " << per << endl;
    }
};
int main()
{
    students s1(1, "parth", 99, 100, 88, 100, 90), s2(2, "raj", 50, 65, 80, 50, 98);

    s1.calculate();
    s1.percentage();
    s1.display();
    s1.result();

    s2.calculate();
    s2.percentage();
    s2.display();
    s2.result();
    return 0;
}
