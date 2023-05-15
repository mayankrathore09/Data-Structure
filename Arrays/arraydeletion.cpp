#include<iostream>
using namespace std;
int main()
{                                      // At Specific Position
    int arr[50],size,pos;

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

    cout<<"enter the poition whom element to be deleted";
    cin>>pos;

    for(int i=pos-1;i<size-1;i++)
    {
        arr[i]=arr[i+1];
    }
    size--;
    cout<<"\narray after deletion \n";

    for(int i=0;i<size;i++)
    {
        cout<<" "<<arr[i];

    }

      return 0;
}