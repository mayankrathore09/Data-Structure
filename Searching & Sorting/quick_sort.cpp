#include<iostream>
using namespace std;

int partition(int arr[],int s,int e)
{

    int pivot= arr[s];

    int count=0;
    for(int i=s+1;i<=e;i++)
    {
        if(arr[i]<=pivot)
        {
            count++;
        }
    }

    //place pivot at right position 
    int pivotindex = s +count;

    swap(arr[pivotindex],arr[s]);

    //abb left and right bhi sambhal lete hai

    int i=s;
    int j=e;

    while( i<pivotindex && j>pivotindex)
    {
        while(arr[i]<=pivot)
        {
            i++;
        }
        while(arr[j]>pivot)
        {
            j--;
        }
        if( i<pivotindex && j>pivotindex)
        {
        swap(arr[i++],arr[j--]);
        }
    }
    return pivotindex;
}

void quicksort(int arr[],int s,int e)
{ 
    //base case
    if(s>=e)
    {
        return ;
    }

    int p= partition(arr,s,e);

    //recursive call
    
    quicksort(arr,s,p-1);   //left part sort karo
    quicksort(arr,p+1,e);  //right part sort karo

}


int main()
{
    int arr[10]={7,49,5,3,11,9,8,29,10,6};
    
    int n=10;

    quicksort(arr,0,n-1);
    
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}