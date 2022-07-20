#include<iostream>

using namespace std;

struct Node{
    int data;
    Node* next;
}*head,*tail,*temp,*newNode;

void insert_End(Node*);
Node* createNewNode(int);
void display(Node*);

int main(){
    head= NULL;
    tail=NULL;
    char ch='y';
    while(ch=='y'||ch=='Y'){
        
        int data;
        cin>>data;
        newNode=createNewNode(data);
        insert_End(newNode);
        char d;
        cout<<"Enter d to display list";
        cin>>d;
        if(d=='d'){
            display(head);
        }
         cout<<"Enter y to add new node";
        cin>>ch;
        
    }
    return 0;
}
Node* createNewNode(int data){
    Node* ptr = new Node;
    ptr->data= data;
    ptr->next=NULL;
    return ptr;
}
void insert_End(Node* newNode){
    if(head==NULL){
        head=newNode;
        tail =head;
    }
    else{
       tail->next=newNode;
       tail=newNode;
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