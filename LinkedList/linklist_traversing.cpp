#include<iostream>
using namespace std;

struct node
{
    int data;
    node*link;
};
int main()
{
    int n,i;
    node *first,*temp,*last;
    cout<<"enter the size of the linklist:\n";
    cin>>n;

    first=new node;
    cout<<"enter data value for node 1"<<" ";
    cin>>first->data;
    first->link=NULL;

    temp=first;
    for(int i=1;i<n;i++)
    {
        last= new node;
        cout<<"enter the data value for "<<i+1<<" ";
        cin>>last->data;
        last->link=NULL;
        temp->link=last;
        temp=last;
    }
    temp=first;

    cout<<"formed linklist:";
    
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->link;
    }
      return 0;
}