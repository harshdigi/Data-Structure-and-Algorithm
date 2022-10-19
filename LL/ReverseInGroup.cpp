#include<bits/stdc++.h>
#include "Implementation/LinkedList.h"
using namespace std;
void reverseInGroup(LinkedList* mylist, int groupSize){
    Node* temp = mylist->head;
    Node* startNode = mylist->head;
    Node* lastNode = NULL;
    Node* prevNode = NULL;
    Node* nextNode = NULL;
    bool  start = true;
    int i =0;
    while(temp!=NULL){
        nextNode = temp->next;
        temp->next = prevNode;
        prevNode = temp;
        temp = nextNode;
        i++;
         if(i == groupSize ){
            i=0;
            if(start){
                mylist->head = prevNode;
                lastNode = temp;
                prevNode= NULL;
                start = false;
            }
            else{
                startNode->next = prevNode;
                startNode = lastNode;
                lastNode = temp;
                prevNode = NULL;
            }
            continue;
        }
    }
    startNode->next= prevNode;
}
int main(){
    LinkedList mylist;
    int sizeofList =0;
    cin>>sizeofList;
    while(sizeofList--){
        int data =0;
        cin>>data;
        mylist.insertNodeatEnd(data);
    }
    int groupsize;
    cin>>groupsize;
    reverseInGroup(&mylist,groupsize);
    mylist.print();
    return 0;
}