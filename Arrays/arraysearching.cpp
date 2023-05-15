#include<iostream>
using namespace std;
int main()
{
    int arr[50],size,val;

    cout<<"enter the size of the array\n";
    cin>>size;

    cout<<"enterthe element of the array\n";
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];

    }
    cout<<"entered arrya are as follows:\n";
    for(int i=0;i<size;i++)
    {
        cout<<" "<<arr[i];

    }
    cout<<"\nenter the element to be searched:\n";
    cin>>val;

    for(int i=0;i<size;i++)
    {
      if(arr[i]==val){
        cout<<"value search at position"<<" "<<i+1;
      }

    }
      return 0;
}