#include<bits/stdc++.h>
#include "Implementation/LinkedList.h"
using namespace std;

void  removeDuplicates (LinkedList* myList)
{
 // your code goes here
    Node* head = myList->head;

    if(head == NULL or head->next == NULL) {
        return;
    }
    
    Node* prev = head;
    Node* curr = head->next;
    
    while(curr->next !=NULL){
        if(prev->data == curr->data){
            curr = curr->next;
            prev->next = curr;
            continue;
        }
        
        prev->next = curr;
        prev= curr;
        curr= curr->next;
    }
    if(curr->data == prev->data){
        prev->next = NULL;
    }
    
}
int main(){
LinkedList mylist;
mylist.insertNodeatEnd(5);
mylist.insertNodeatEnd(5);
mylist.insertNodeatEnd(5);
removeDuplicates(&mylist);
mylist.print();
return 0;
}