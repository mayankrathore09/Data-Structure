#include <bits/stdc++.h> 
#include<algorithm>
#include<queue>

class node{
    public:
    int data;
    int rowIndex;
    int colIndex;

    node(int data,int row,int col)
    {
        this->data= data;
        this->rowIndex=row;
        this->colIndex= col;
    }
};
class compare{
    public:
    bool operator()(node *a,node *b)
    {
        return a->data > b->data;
    }
};
vector<int> mergeKSortedArrays(vector<vector<int>>&kArrays, int k)
{
   priority_queue<node*,vector<node*>,compare> minheap;
   vector<int>ans;

   for(int i=0;i<k;i++)
   {
       node* temp = new node(kArrays[i][0],i,0);
       minheap.push(temp);
   }

   while(minheap.size()>0)
   {
       node* temp = minheap.top();
       ans.push_back(temp->data);
       minheap.pop();

       int i=temp->rowIndex;
       int j=temp->colIndex;

       if(j+1 < kArrays[i].size())
       {
           node* tem= new node(kArrays[i][j+1],i,j+1);
           minheap.push(tem);
       }

   }

   return ans;
}
