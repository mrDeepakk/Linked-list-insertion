#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node*next;
    node(int val){
        data=val;
        next=NULL;
    }
};

node*head=NULL;

void InsertAtTail(int val){
    node* temp=head;
    node*new_node=new node(val);
    if(head==NULL){
        head=new_node;
        return;
    }
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=new_node;
}
void InsertAtAny(int pos,int val){
    node*temp=head;
    node*n=new node(val);


    if(head==NULL){
        head=n;
        return;
    }
   for(int i=1; i<pos-1; i++){
    temp=temp->next;
   }
   n->next=temp->next;
   temp->next=n;
}

void display(){
    node*temp=head;
    while (temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
    
}

int main()
{
    InsertAtTail(1);
    InsertAtTail(2);
    InsertAtTail(3);
    InsertAtTail(4);
    InsertAtTail(5);
    InsertAtTail(6);
    display();
    InsertAtAny(3,77);
    display();

    return 0;
}