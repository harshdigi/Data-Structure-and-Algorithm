#include<bits/stdc++.h>
using namespace std;

struct Node {
    Node* next;
    int data;
};

Node* top;

// Pushing data in stack
void push( int data ){
    Node* temp = new Node();
    if(!temp){
        cout<<"\nStack Overflow";
        exit(1);
    }
    temp->data = data;
    temp->next = top;
    top = temp;
}

// check stack is empty

int isEmpty(){
    return top == NULL;
}

int peek(){
    if(!isEmpty()){
        return top->data;
    }
    else{
        exit(1);
    }
}
void pop(){
    Node*temp;
    if(top ==NULL){
        cout<<"\n Stack UnderFlow"<<endl;
        exit(1);
    }
    else{
        temp= top;
        top =top->next;
        free(temp);
    }
}

void printStack(){
    Node* temp =top;
    cout<<"Stack is : ";
    while(temp->next!=NULL || temp!=NULL){
            cout<<temp->data<<" ";
            temp= temp->next;

    }

}

int main(){

return 0;
}