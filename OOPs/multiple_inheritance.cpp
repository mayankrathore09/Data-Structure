#include<iostream>
using namespace std;

class Animal           // parent class 1
{
    public:
    double weight;
    int age;

    void eat()
    {
        cout<<"eating\n";
    }
};

class dog{    // parent class 2
    public:

    void bark()
    {
        cout<<"barking\n";

    }
    void eat()
    {
        cout<<"eat the food\n";
    }
};

class dogbaby:public Animal,public dog{       // multiple inheritance achieved
 
    public:

    void weep()
    {
        cout<<"weeping\n";
    }
};
int main()
{
    dogbaby g;
    g.dog::eat();   //ambiguity 
    g.bark();
    g.weep();
      return 0;
}