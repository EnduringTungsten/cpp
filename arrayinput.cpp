#include <iostream>

using namespace std;

int main()
{
    int a[10],i;
    cout<<"Enter array of 10 numbers\n";    
    for(i=0;i<10;i++)
    {
        cin>>a[i];
    }
    cout<<"Array is =\n";
    for(i=0;i<10;i++)
    {
        cout<<a[i]<<"\n";
    }
    return 0;
}