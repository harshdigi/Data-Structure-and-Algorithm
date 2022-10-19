#include<iostream>
using namespace std;

class Node {
    
    public:
        int data;
        Node* next;
        Node(){
            int data= 0;
            next = NULL;
        }
        Node(int x){
            this->data = x;
            this->next = NULL;
        }
        
};
class LinkedList {
  
    public: 
        Node* head;
        int size =0;
        LinkedList(){
            head = NULL;
        }
        void insertNodeatBeg(int);
        void insertNodeatEnd(int);
        void insertAtNthPos(int,int);
        void print();
        void deleteNode(int);
        void deleteNthNode(int);
        void reverseList();
        void reverseListRec(Node*,Node*);
        int sizeOfList();
        int getSize();
        void middleoflist();
};

void LinkedList :: insertNodeatBeg(int data){

    Node* newNode = new Node(data);
    if(head == NULL){
        head = newNode;
        size++;
        return;
    }
    newNode->next = head;
    head= newNode;
    size++;
}
void LinkedList :: insertNodeatEnd(int data){
    Node* newNode = new Node(data);
    if(head == NULL){
        head = newNode;
        size++;
        return;
    }
    Node* temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next = newNode;
    size++;
}
void LinkedList :: insertAtNthPos(int data, int index){
    int n= size;
    Node* temp = head;
    Node* newNode = new Node(data);
    if(head == NULL){
        head = newNode;
        size++;
        return;
    }
    if(index>=n){
        cout<<"Cannot insert node at given location so inserting at the end of list";
        cout<<endl;
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next = newNode;
        return;
    }

    int count=0;
    Node* prev=NULL;
    while(count<index){
        prev = temp;
        temp = temp->next;
        count++;
    }

    if(prev==NULL){
        newNode->next = head;
        head = newNode;
    }
    else{
        newNode->next= temp;
        prev->next= newNode;
    }
}
//NULL
void LinkedList :: print(){
    Node* temp = head;
    if(head == NULL){
        cout<<"List is empty \n";
    }
    while(temp != NULL){
        cout<<temp->data<< "->" ;
        temp = temp->next;
    }
    cout<<endl;
}
// []->[]->[]->[]->
void LinkedList :: reverseList(){
    Node* temp = head;
    Node* nextNode = NULL;
    Node* prevNode = NULL;
    while(temp != NULL){
        nextNode = temp->next;
        temp->next = prevNode;
        prevNode = temp;
        temp = nextNode;
    }
    head = prevNode;
}
void LinkedList :: deleteNthNode(int n){
    if(n>size){
        cout<<"n is greater than size of list";
        return;
    }
    int i=1;
    Node* temp = head;
    Node* prev = NULL;
    while(i<n){
        prev = temp;
        temp= temp->next;
        i++;
    }
    if(prev ==NULL){
        prev = temp->next;
        head = prev;
        delete(temp);
    }
    else{
    prev->next  = temp->next;
    delete(temp);
    }
}
void LinkedList :: deleteNode(int key){
    Node* temp = head;
    Node* prev = NULL;
    while(temp!=NULL){
        if(temp->data == key){
            if(prev == NULL){
                prev = temp->next;
                head = prev;
            }
            else{
                prev->next = temp->next;
                delete(temp);
            }
            return;

        }
        prev = temp;
        temp = temp->next;
    }
}
int LinkedList :: sizeOfList(){
    int size =0 ;
    Node* temp = head;
    while(temp != NULL){
        size++;
        temp= temp->next;
    }
    return size;
}
int LinkedList :: getSize(){
    return size;
}
void LinkedList :: reverseListRec(Node* temp ,Node* prev){
    if(temp == NULL){
        head = prev;
        return;
    }
    reverseListRec(temp->next, temp);
    temp->next = prev;
    
}
void LinkedList :: middleoflist(){
    Node* slow = head;
    Node* fast = head;
    while( fast->next!=NULL &&fast->next->next!=NULL){
        slow = slow->next;
        fast = fast->next->next;
    }
    cout<<slow->data<<endl;
}
