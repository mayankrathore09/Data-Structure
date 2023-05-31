#include<iostream>
using namespace std;
int main()
{
    int arr[50],size;
    cout<<"enter size\n";
    cin>>size;
    cout<<"enter element:\n";
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    int temp,j;
    for(int i=1;i<size;i++)
    {
        temp=arr[i];
        j=i-1;
        while(j>=0 && arr[j]>temp)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=temp;
    }
    cout<<"\nSorted array are as follows: \n";
     for(int i=0;i<size;i++)
    {
        cout<<" "<<arr[i];
    }

      return 0;
}