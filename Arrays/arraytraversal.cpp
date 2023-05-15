#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the size of the array";
    cin>>n;

    int arr[n];
    cout<<"enter the element of the array";

    for(int i=0;i<n;i++) 
    {
        cin>>arr[i];
    }
    cout<<"formed array is \n";

    for(int i=0;i<n;i++)
    {
        cout<<" "<<arr[i];

    }
      return 0;
}