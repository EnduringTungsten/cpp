#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    std::string num;
    cout<<"Enter a number\n";
    cin>>num;
    reverse(num.begin(),num.end());
    cout<<"Reversed="<<num;
    return 0;
}