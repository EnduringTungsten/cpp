#include <iostream>

using namespace std;

int add(int a,int b)
{
    return a+b;
}

int main()
{
    int x,y;
    cout<<"Enter 1st number\n";
    cin>>x;
    cout<<"Enter 2nd number\n";
    cin>>y;
    cout<<add(x,y);
}