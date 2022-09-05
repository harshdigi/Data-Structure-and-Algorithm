#include<bits/stdc++.h>
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

class Stack{
    public:
        Node* top;
        Stack(){
            top =NULL;
        }
        void push(int x);
        void pop();
        void print();
        bool isEmpty();
        int getTop();

};

void Stack:: push(int x){
    Node* nextElement = new Node(x);
    if(top == NULL){
       top = nextElement;
        return;
    }
    
    nextElement->next = top;
    top = nextElement;
}
void Stack :: print(){
    if(top == NULL){
        return;
    }
    Node* temp = top;
    while(temp != NULL){
       
        temp = temp->next;
    }
}



int main(){
    Stack mystack;
    mystack.push(1);
    mystack.push(2);
    mystack.push(3);
    mystack.push(4);
    mystack.push(6);
    mystack.push(7);
    mystack.push(8);
    mystack.push(9);
    mystack.push(10);
    mystack.push(11);
    mystack.print();
    return 0;
}