#include<iostream>
using namespace std;

class student {
    public:
    int age;
    string name;
    double weight,height;
    
    void input()
    {
        cout<<"enter the name ";
        cin>>name;
        cout<<"enter the age ";
        cin>>age;
        cout<<"enter the weight ";
        cin>>weight;
        cout<<"enter the height ";
        cin>>height;
    }
    void show()
    {
        cout<<"NAME: "<<name<<"AGE: "<<age<<"WEIGHT: "<<weight<<"HEIGHT: "<<height;
    }
    
};
int main()
{
    student s;
   

    s.input();
    s.show();

      return 0;
}