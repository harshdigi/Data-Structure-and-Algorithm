#include<bits/stdc++.h>
#include "Implementation/LinkedList.h"
using namespace std;
void movelasttofront(LinkedList* mylist){
    if(mylist->head == NULL or mylist->head->next == NULL){
        return;
    }
    Node* prev = mylist->head;
    Node* curr= mylist->head->next;
    while(curr->next !=NULL){
            curr=curr->next;
            prev=prev->next;
    }
    prev->next = NULL;
    curr->next = mylist->head;
    mylist->head = curr;
}
int main(){
 LinkedList mylist;
 mylist.insertNodeatEnd(5);
 mylist.insertNodeatEnd(4);
 mylist.insertNodeatEnd(3);
 mylist.insertNodeatEnd(4);
 mylist.insertNodeatEnd(3);
 mylist.insertNodeatEnd(1);
 mylist.insertNodeatEnd(6);
 mylist.print();
 movelasttofront(&mylist);
 mylist.print();
return 0;
}