#include <iostream>

using namespace std;

int main()
{
    int prev=0,curr=1,i,next,n;
    cout<<"Enter limit for fibonacci series";
    cin>>n;
    cout<<prev<<"\t"<<curr<<"\t";
    for(i=0;i<=n;i++)
    {
            next=prev+curr;
            prev=curr;
            curr=next;
            cout<<next<<"\t";
    }
}