#include<iostream>

using namespace std;

struct Node{
    int data;
    Node* next;
}*head,*tail,*temp,*newNode;

void insert_NodeAtN(int);
Node* createNewNode(int);
void display(Node*);

int main(){
    head= NULL;
    tail=NULL;
    char ch='y';
    while(ch=='y'||ch=='Y'){
        
        int data;
        int pos;
        cin>>data;
        cin>>pos;
        newNode=createNewNode(data);
        insert_NodeAtN(pos);
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
void insert_NodeAtN(int pos){
   temp =head;
   int t=0;
   if(pos==0){
       newNode->next=head;
       head=newNode;t++;
   }else{
   while (temp!=NULL && t<pos-1)
   {
       temp=temp->next;
       t++;
   }
   if(temp!=NULL){
    Node* a =temp->next;
    temp->next=newNode;
    newNode->next=a;}
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