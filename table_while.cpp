#include <iostream>

using namespace std;

int main()
{
    int i=1,n;
    cout<<"Enter a number\n";
    cin>>n;
    cout<<"Table of number=\n";
    while(i<=10)
    {
        cout<<n*i<<"\n";
        i++;
    }
    return 0;
}