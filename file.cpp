#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream f1("C:/Users/ADMIN/Desktop/cpp/12th/test.doc");
    f1<<"Hi";
    f1<<"Hello";
    const int MAX =80;
    char buffer [MAX];
    f1.close();
    ifstream f2 ("C:/Users/ADMIN/Desktop/cpp/12th/test.doc");
    while(f2)
    {
        f2.getline(buffer,MAX);
        cout<<buffer;
    }
    f2.close();
}