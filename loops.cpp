#include <iostream>
#include <conio.h>
using namespace std;

int main()
{    
    int n,i,j;
    cout<<"Enter a number\n";
    cin>>n;
    for(i=1;i<=n;i++)
    {
     for(j=1;j<=i;j++)
     {
        cout<<"*";
     }
     cout<<"\n";
    }
    return 0;
}