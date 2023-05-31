#include<iostream>
using namespace std;

class Animal 
{
    public:
    double weight;
    int age;

    void eat()
    {
        cout<<"eating\n";
    }
};

class dog: public Animal{
    public:

    void bark()
    {
        cout<<"barking\n";

    }
};

class pet {
    public :
    void domestic()
    {
        cout<<"domestic\n";
    }
};
class dogbaby:public dog,public pet{

    public:

    void weep()
    {
        cout<<"weeping\n";
    }
};
int main()
{
    dogbaby g;
    g.eat();
    g.bark();
    g.weep();
    g.domestic();

      return 0;
}