#include<iostream>
using namespace std;

      // implementation of the node class 

class node{
    public:
    int data;
    node* next;

    node(int data){
        this-> data = data;
        this-> next = NULL;
    }
};
   // function to print the linklist 

void print(node* &head)
{
    node* temp= head;
    while(temp!= NULL)
    {
        cout<< temp-> data<<" ";
        temp= temp->next;
    }
    cout<<endl;
}
// fuc. to insert an node at head of the linklist

void insertAtHead(node* &head,int data)
{
    node* temp= new node(data);
    temp-> next = head;
    head= temp;
}
// fun. to insert an node at tail of linklist

void insertAtTail(node* &tail,int data)
{
    node *temp= new node(data);
    tail->next = temp;
    tail= temp;

}
// fun. to insert an node at middle position of linklist

void inserAtPosition(node* &tail,node* &head,int position,int data)
{
    //insertion at first position

    if(position == 1)
    {
        insertAtHead(head,data);
        return;
    }
    node* temp= head;
    int count=1;

    while(count<position-1)
    {
        temp=temp->next;
        count++;
    }

    // insertion at last position

    if(temp->next==NULL)
    {
        insertAtTail(tail,data);
        return;
    }

    //creating a node to inseert
    node* nodeToInsert = new node(data);

    nodeToInsert -> next = temp-> next;
    temp-> next = nodeToInsert;
}

void deletenode(int position,node* &head)
{
    //deleting first or start node
    if(position ==1)
    {
        node* temp= head;
        head=head->next;
           //memory free......
        delete temp; 
    }
   else{
    // deleting at middle or last position 

    node* curr=head;
    node* back=NULL;

    int count=1;
    while(count<position)
    {
        back=curr;
        curr=curr->next;
        count++;
    }
    back->next= curr->next;
    delete curr;
   }
}

                    // void sort(node* head){
                    //     node* curr=head;
                    //     while(curr!=NULL)
                    //     {
                    //         node* temp= curr->next;
                    //         while(temp!=NULL)
                    //         {
                    //             node *back=temp;
                    //             if(temp->data==curr->data)
                    //             {
                    //                 back->next=temp->next;
                    //                 temp->next=NULL;
                    //                 delete temp;
                                    
                    //             }

                    //             temp=temp->next;
                    //         }
                    //         curr=curr->next;
                    //     }

                    // }
    
int main()
{
    //creation of the first node 
    node* node1= new node(10);
    // cout<< node1-> data <<endl;
    // cout<< node1-> next <<endl;
    
    // header pointer 
    node *head= node1;
    node *tail = node1;

    print(head);

    cout<<endl;

    insertAtHead(head,20);
    print(head);

    insertAtHead(head,23);
    print(head);

    insertAtTail(tail,56);
    print(head);

    insertAtTail(tail,78);
    insertAtTail(tail,119);

    print(head);

    cout<<"insertrion at middle position"<<endl;

    inserAtPosition(tail,head,4,88);

    print(head);
    inserAtPosition(tail,head,1,71);
    print(head);

    cout<<"head "<<head->data<<endl;
    cout<<"tail "<<tail->data<<endl;

    deletenode(4,head);
    print(head);

    deletenode(1,head);
    print(head);

    // sort(head);
    // print(head);
    return 0;
}