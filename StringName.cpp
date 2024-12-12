#include <iostream>

using namespace std;

int main()
{
    char name[30];
    cout<<"Enter your Name\n";
    cin.getline(name,30);
    cout<<"Your Name is "<<name;
    return 0;
}