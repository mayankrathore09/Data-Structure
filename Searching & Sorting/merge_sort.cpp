/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

void merge(int *arr,int start,int end)
{
    int mid=start+(end-start)/2;
    
    int len1=mid-start+1;
    int len2=end-mid;
    
    int *arr1= new int[len1];
    int *arr2=new int[len2];
    
    //coping the elements to the array len1 and len2 
    
    int mainarrayindex=start;
    
    for(int i=0;i<len1;i++)
    {
        arr1[i]=arr[mainarrayindex];
        mainarrayindex++;
        
    }
    
     mainarrayindex=mid+1;
    
    for(int i=0;i<len2;i++)
    {
        arr2[i]=arr[mainarrayindex];
        mainarrayindex++;
        
    }
    
    //merge two sorted arrays
    
    int index1=0;
    int index2=0;
    mainarrayindex=start;
    
    while(index1<len1 && index2<len2)
    {
        if(arr1[index1]<arr2[index2])
        {
            arr[mainarrayindex]=arr1[index1];
            mainarrayindex++;
            index1++;
        }else
        {
            arr[mainarrayindex++]=arr2[index2++];
        }
    }
    //remianings  
    
    
    
    while(index1<len1)
    {
        arr[mainarrayindex++]=arr1[index1++];
    }
    
     while(index2<len2)
    {
        arr[mainarrayindex++]=arr2[index2++];
    }
    
    
    
}

void mergesort(int *arr,int start,int end)
{
    if(start>=end)
    {
        return;
    }
    
    int mid=start+(end-start)/2;
    
    mergesort(arr,start,mid);
    
    mergesort(arr,mid+1,end);
    
    merge(arr,start,end);
}

int main()
{
    int arr[10]={34,212,78,46,45,49,85,94,12,88};
    
    mergesort(arr,0,9);
    
    for(int i=0;i<10;i++)
    {
        cout<<arr[i]<<" ";
    }
    
    return 0;
}
