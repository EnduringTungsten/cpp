#include <iostream>
using namespace std;
class number
{
    private:
    int a;
    public:
    void getnum(int x);
    friend void printnum(number num);
};
void  number::getnum(int x)
{
        a=x;
}
void printnum(number  obj)
{
        cout<<"value of a=" <<obj.a;
}
int main()
{
    number  nobj;
    nobj.getnum(1000);
    printnum(nobj);
}