#include<iostream>
#include<queue>
using namespace std;
class Solution{
    public:
    // arr : given array
    // l : starting index of the array i.e 0
    // r : ending index of the array i.e size-1
    // k : find kth smallest element and return using this function
    int kthSmallest(int arr[], int l, int r, int k) {
        
        priority_queue<int>pq;
        for(int i=0;i<k;i++){
            pq.push(arr[i]);
        }
        
        for(int i=k;i<=r;i++)
        {
            int element=arr[i];
            
            if(element < pq.top()){
                pq.pop();
                pq.push(element);
            }
        }
        
        return pq.top();
    }
};

int main()
{
    int arr[] = {3, 4, 5, 1, 2};
    int n = sizeof(arr)/sizeof(arr[0]);
    Solution s;
    int k = s.kthSmallest(arr, 0, n-1, 3);
    cout << "Kth smallest element is " << k;
    
    
    return 0;
}