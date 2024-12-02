#include <iostream>
 using namespace std;
 
 int main()
 {
    int n;
    cout<<"Enter a number\n";
    cin>>n;
    cout<<"Table of number=\n";
    int i;
    for(i=1;i<=10;i++)
    {
        cout<<n*i<<"\n";
    }
    return 0;
 }