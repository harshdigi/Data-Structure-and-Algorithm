#include<bits/stdc++.h>
#include "Implementation/LinkedList.h"
using namespace std;
Node* nth_elementfromlast(LinkedList* mylist, int n){
    Node* temp = mylist->head;
    Node* curr = mylist->head;
    Node* ans = NULL;
    int i =1;
    while(curr->next!=NULL){
        if(i<n){
            curr= curr->next;
            i++;
        }
        else{
        
            curr =curr->next;
            temp= temp->next;
        }

    }
    if(i<n){
        return NULL;
    }
    else{
        return temp;
    }

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
    Node* ans = nth_elementfromlast(&mylist, 3);
    if(ans!=NULL){
        cout<<ans->data<<endl;
    }
    return 0;
}