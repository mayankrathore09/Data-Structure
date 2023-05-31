#include<iostream>
using namespace std;

void bubblesort(int arr[],int size)
{
    //base case
    if(size==0 || size==1)
    {
        return ;
    }
     //recursive call
     for(int i=0;i<size-1;i++)
     {
        if(arr[i]>arr[i+1])
        {
            swap(arr[i],arr[i+1]);
        }
     }

     bubblesort(arr,size-1);
}


int main()
{
    int arr[10]={25,654,12,634,95,267,97,346,56,56};

    bubblesort(arr,10);

    for(int i=0;i<10;i++)
    {
        cout<<" "<<arr[i];
    }

      return 0;
}