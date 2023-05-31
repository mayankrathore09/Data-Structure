#include<iostream>
using namespace std;

 int binarysearch(int *arr,int start,int end,int key)
 {
      //base case
      if(start>end)
      {
        return -1;
      }

      int mid= start + (end-start)/2;

      if(arr[mid]==key)
      {
        return mid;
      }

      if(arr[mid]>key)
      {
        return binarysearch(arr,start,mid-1,key);
      }
      if(arr[mid]<key)
      {
        return binarysearch(arr,mid+1,end,key);
      }

 }
int main()
{
    int arr[10]={13,16,23,26,29,35,37,39,46,58};

    int key=26;

    int ans= binarysearch(arr,0,9,key);

    cout<<"key found at location "<<ans+1<<endl;
      return 0;
}