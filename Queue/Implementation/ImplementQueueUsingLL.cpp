#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
        int data;
        Node* next;
        Node(int d){
            data = d;
            next = NULL;
        }
};

class Queue{
    Node *front, * rear;
    
    //Initializing Queue
    Queue(){
        front= rear= NULL;
    }

    //insert element
    void enQueue(int x){
        Node* temp = new Node(x);
        if(rear == NULL){
            front = rear = temp;
            return;
        }
        rear->next = temp;
        rear = temp;
    }
    // delete node
    void deQueue(){
        if(front == NULL){
            return;
        }
        Node* temp = front;
        front = front->next;

        if(front == NULL){
            rear = NULL;
        }
        delete(temp);
    }
};


int main(){

return 0;
}