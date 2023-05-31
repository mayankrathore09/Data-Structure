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

int main()
{
    dog d;
    
    d.eat(); 
    d.bark();
    d.weight=12.3;

    cout<<"the weight of the dog is "<<d.weight;
      return 0;
}