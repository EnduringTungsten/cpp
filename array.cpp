#include <iostream>

using namespace std;

int main ()
{
    int n,m,i,k;
    cout<<"Enter number of elements of 1st array\n";
    cin>>n;
    int a[n];
    cout<<"Enter number of elements of 2nd array\n";
    cin>>m;
    int b[m];
    cout<<"Enter elements of 1st array\n";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"Enter elements of 2nd array\n";
    for(i=0;i<m;i++)
    {
        cin>>b[i];
    }
    if(m>n)
    {
        k=m;
    }
    else if(m<n)
    {
        k=n;
    }
    else
    {
        k=m;
    }
    int c[k];
    for(i=0;i<k;i++)
    {
        c[i]=a[i]+b[i];
    }
    cout<<"Addition of array=\n";
    for(i=0;i<k;i++)
    {
        cout<<c[i]<<"\n";
    }
    return 0;
}