#include <iostream>

using namespace std;

int main()
{
    int a[3][3],i,j;
    cout<<"Enter numbers of dda\n";
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cin>>a[i][j];
        }
    }
    cout<<"Diagonal Elements are\n";
    for(i=0;i<3;i++)
    {
        cout<<a[i][i]<<" ";
    }
    return 0;
}