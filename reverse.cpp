#include <iostream>
#include <algorithm>
#include <string.h>
using namespace std;

int main()
{
    int n,r;
    cout<<"Enter a number\n";
    cin>>n;
    cout<<"Reverse of number=\n";
    std::string num=to_string(n);
    int len=num.length();
    while(n!=0)
    {
        r=n%10;
        cout<<r;
        n/=10;
    }
    return 0;
}