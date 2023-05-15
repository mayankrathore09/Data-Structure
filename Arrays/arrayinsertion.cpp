#include<iostream>
using namespace std;            // At specific position in the array 

int main()
{
    int arr[50],size,pos,val;

    cout<<"enter the size of the array";
    cin>>size;
    
    cout<<"enter the element of the array";

    for(int i=0;i<size;i++)
    {
        cin>>arr[i];

    }
    cout<<"entered array are as follows\n";
    for(int i=0;i<size;i++)
    
    {
        cout<<" "<<arr[i];

    }

    cout<<"\nenter the value to be inerted in the array\n";
    cin>>val;

    cout<<"enter the position to enter the new element\n";
    cin>>pos;

    for(int i=size-1;i>=pos-1;i--)
    {
        arr[i+1] = arr[i];
    }
    arr[pos-1]=val;
    size++;
    
    cout<<"newly formed array \n";
    for(int i=0;i<size;i++)
    {
        cout<<" "<<arr[i];

    }

      return 0;
}