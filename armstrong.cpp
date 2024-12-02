#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    cout<<"enter a number\n";
    int n;
    cin>>n;
    int power=0;
    int t=n;
    while(t!=0)
    {
        power++;
        t/=10;
    }
    int sum=0;
    int temp=n,temp1;
    while(n!=0)
    {
        temp1=n%10;
        sum+=pow(temp1,power);
        n/=10;
    }
    if(sum==temp)
    {
        cout<<"number is armstrong number";
    }
    else
    {
        cout<<"number is not armstrong number";
    }
    return 0;
}