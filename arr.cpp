#include <iostream>

using namespace std;

int main()
{
    int a[10],i,high;
    cout<<"Enter array\n";
    for(i=0;i<10;i++)
    {
        cin>>a[i];
    }
    high=a[0];
    for(i=0;i<10;i++)
    {
        if(a[i]>high)
        high=a[i];
    }
    cout<<"Maximum number of array is=\t"<<high;    
    return 0;
}