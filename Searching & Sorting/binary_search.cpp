#include<iostream>
using namespace std;

int binarysearch(int arr[],int size,int key)
{
    int start=0;
    int end=size-1;
    int mid= (start+end)/2;

    while(start<=end)
    {
        if(arr[mid]==key)
        {
            return mid;
            break;
        }
        else if(arr[mid]>key)
        {
            end=mid-1;
        }
        else if(arr[mid]<key)

        { 
            start=mid+1;
        }

        mid=(start+end)/2;

    }
    return -1;
}
int main()
{
    int arr[10]={3,7,9,10,15,18,19,20,26,28};
     cout<<" value searched at index : "<<binarysearch(arr,10,26);
      return 0;
}