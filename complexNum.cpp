#include <iostream>

using namespace std;

class A
{
    public:
    A()
    {}
    int a,b;
    A(int i,int j)
    {
        a=i;
        b=j;
    }
    void show()
    {
        cout<<a<<"+i"<<b<<endl;
    }
    A operator+(A);
};
A A::operator+(A obj)
{
    A temp;
    temp.a=a + obj.a;
    temp.b=b + obj.b;
    return(temp);
}
int main()
{
    A c1(3,7), c2(5,2), c3;
    cout<<"First number is ";
    c1.show();
    cout<<"Second number is ";
    c2.show();
    c3=c1+c2;
    cout<<"Addition of complex number is= ";
    c3.show();
}