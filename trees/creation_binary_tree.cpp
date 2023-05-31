#include<iostream>
#include<queue>
using namespace std;

class node{
    public:
    int data;
    node* left;
    node*right;

    node(int data)
    {
        this->data=data;
        this->left=NULL;
        this->right=NULL;
    }
};

node* Buildtree(node *root)
{
    cout<<"enter the data: "<<endl;
    int data;
    cin>>data;
    root= new node(data);

    if(data==-1)
    {
        return NULL;
    }

    cout<<"enter the data for left of " <<data<<endl;
    root->left=Buildtree(root->left);

    cout<<"enter the data for right of "<<data<<endl;
    root->right=Buildtree(root->right);

    return root;

}

void levelordertravrsal(node * root)
{
   queue<node*> q;
   q.push(root);

   while(!q.empty())
   {
     node* temp=q.front();
     q.pop();

     if(temp==NULL)
     {
        cout<<"\n";
        if(!q.empty())
        {
            q.push(NULL);
        }
     }else{
        cout<<temp->data<<" ";
        if(temp->left)
        {
            q.push(temp->left);
        }

        if(temp->right)
        {
            q.push(temp->right);
        }
     }
   }

}



int main()
{
    node* root=NULL;

    root=Buildtree(root);
    levelordertravrsal(root);

    return 0;
}