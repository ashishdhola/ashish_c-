#include <iostream>
using namespace std;
class findage
{
    int age;

public:
    findage(int n) //comstructor
    {
        age = n;
        cout << "\n Ashish= " << age;
    }
    findage(findage &new_age) //comstructor
    {
        age = new_age.age;
        cout << "\n nirav= " << age;
    }
};
int main()
{
    findage ashish(19);
    findage nirav(ashish);
}