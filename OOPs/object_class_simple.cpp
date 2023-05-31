#include<iostream>
using namespace std;

class demo
{
    private:          // by default it will be private unless not defined
      int a,b;
    public:
      void input()
      {
        cout<<"enter the values of a & b";
        cin>>a>>b;
      }
      void show()
      {
        cout<<"the entered values of a= "<<a<<" and b="<<b;
      }
 
};

int main()
{
    demo obj;
    obj.input();
    obj.show();
      return 0;
}