//Program to insert at beginning
#include<iostream>
using namespace std;
// Node 
struct Node
{
    int data;
    Node* next;
}*head,*temp,*newptr;
Node* createNewNode(int);
void insertBeg(Node*);
void display(Node*);

int main(){
    head =NULL;
    int data; char ch ='y';
    while(ch=='y' || ch=='Y')
    {  cout<<"\nEnter data to insert in list";
        cin>>data;
        cout<<"Creating new node";
        newptr = createNewNode(data);
        if(newptr!=NULL){
            cout<<"\nNode successfully created\n";
        }
        else{
            cout<<"\n Node creation failed\n";
        }
        cout<<"Now inserting node in list\n";
        insertBeg(newptr);
        cout<<"Now the list is\n";
        display(head);
        cout<<"Continue inserting node press y";
        cin>>ch;
    }
    return 0;
}

Node * createNewNode(int data){
    Node* node =new Node;
    node->data= data;
    node->next=NULL;
    return node;
}
void insertBeg(Node * np){
    if(head==NULL){
        head=np;
    }
    else{
        temp=head;
        head=np;
        np->next=temp;
       
    }
}
void display(Node *head){
    temp =head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        cout<<"\n";
        temp=temp->next;

    }
}
