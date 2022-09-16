#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;
    node(int val){
        data=val;
        next=NULL;
    }
};

node* head=NULL;

void InsertAtHead(int val){
    node*new_node=new node(val);
    
    new_node->next=head;
    head=new_node;
}

void display(){
    node*temp=head;
    while (temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    
}
int main()
{
    InsertAtHead(1);
    InsertAtHead(2);
    InsertAtHead(3);
    InsertAtHead(4);
    InsertAtHead(5);
    display();


    return 0;
}