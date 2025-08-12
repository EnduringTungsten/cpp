#include <iostream>

using namespace std;

class base
{
  public:
  virtual void print()
  {
    cout<<"print base"<<endl;
  }  
};
class derived: public base
{
    public:
    void print()
    {
        cout<<"print derived"<<endl;
    }
};
int main()
{
    base *bptr;
    derived d;
    bptr=&d;
    bptr->print();
}