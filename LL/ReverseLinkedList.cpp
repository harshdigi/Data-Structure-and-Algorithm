#include<bits/stdc++.h>
using namespace std;
struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
};
//Recursive Solution
ListNode* reverseList(ListNode* head) {
     if(head==NULL || head->next==NULL){
        return head;
    }
    ListNode* miniHead=reverseList(head->next);
    head->next->next=head;
    head->next=NULL;
    return miniHead;
}
// iterative solution
ListNode* reverseList(ListNode* head) {
      ListNode* prev = NULL, *curr = head;
        
        while(curr != NULL)
        {
            ListNode *temp = curr->next;
            curr->next = prev;
            prev = curr;
            curr = temp;
        }
                
        return prev;
    }
int main(){

return 0;
}