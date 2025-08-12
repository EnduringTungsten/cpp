#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    char a[50],b[50];
    int len;
    cout<<"Enter your string"<<endl;
    cin.getline(a,50);
    cout<<"Enter other string as blank"<<endl;
    len=strlen (a);
    cout<<"length of string "<<len<<endl;
    strcpy(b,a);
    cout<<"Second string is"<<b<<endl;
    cout<<"After concatenation "<<a<<endl;
}