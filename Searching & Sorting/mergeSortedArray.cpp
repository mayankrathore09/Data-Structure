#include<iostream>
#include<vector>
using namespace std;

void merge(int arr1[],int n,int arr2[],int m,int arr3[]){
    int i=0,j=0,k=0;

    while(i<n && j<m)
    {
        if(arr1[i]<arr2[j])
        {
            arr3[k]=arr1[i];
            k++;
            i++;
        }
        else{
            arr3[k]=arr2[j];
            k++;
            j++;
        }
    }

    while(i<n)
    {
        arr3[k]=arr1[i];
        i++;
        k++;
    }
     while(j<m)
    {
        arr3[k]=arr2[j];
        j++;
        k++;
    }
}

void print(int arr[],int n){
    cout<<"printing array\n";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}


int main()
{
    int arr1[]={2,5,7,9};
    int arr2[]={1,3,6,11,18,78};
    int arr3[10]={0};
   
    merge(arr1,4,arr2,6,arr3);
    print(arr3,10);
      return 0;
}