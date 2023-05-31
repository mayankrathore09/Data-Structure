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

class dogbaby:public dog{

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
      return 0;
}