#include<iostream>
using namespace std;
int main()
{
    float math, sci, eng, guj, total;
    cout << "enter marks for math sci eng guj:";
    cin >> math >> sci >> eng >> guj;
    total = math + sci + eng + guj;
    cout << "\ntotal:" << total;
    cout << "\n PR:" << total / 4;
}