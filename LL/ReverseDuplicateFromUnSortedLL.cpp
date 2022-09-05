#include<bits/stdc++.h>
#include "Implementation/LinkedList.h"
using namespace std;

Node * removeDuplicates( Node *head) 
    {
        unordered_map<int,int> fq;
        if(head == NULL or head->next ==NULL){
            return head;
        }
        Node* temp = head;
        Node* prev = head;
        Node* curr = head->next;
        fq[prev->data]++;
        while(curr!=NULL){
            fq[curr->data]++;
            if(fq[curr->data] > 1){
                fq[curr->data]--;
                prev->next= curr->next;
                curr=curr->next;
                continue;
            }
            curr = curr->next;
            prev = prev->next;
        }
        
        return head;
     
}
int main(){

return 0;
}