#include<iostream>
using namespace std;

class world
{
    public:

    void sum(int a,int b)
      {
          return a+b;

      }                                    //some error

      void sum(int a,int b,int c)
      {
        return a+b+c;
     }


};
int main()
{
    world s;
    s.sum(2,4);
    s.sum(33,78,8);
      return 0;
}