#include <bits/stdc++.h>
using namespace std;
struct ListNode {
  int val;
  ListNode *next;
  ListNode() : val(0), next(nullptr) {}
  ListNode(int x) : val(x), next(nullptr) {}
  ListNode(int x, ListNode *next) : val(x), next(next) {}
};

ListNode *mergeTwoLists(ListNode *list1, ListNode *list2) {

  ListNode *head = NULL; // output node
  ListNode *temp = NULL; // node to iterate

  // check if list1 is NULL if first list is null then automatically the answer
  // will be list2 so return it
  if (!list1) {
    return list2;
  }
  // check if list2 is NULL if list3 is null then automatically the answer will
  // be list1 so return it
  if (!list2) {
    return list1;
  }

  // now check for the first value of the head, check which list's head is
  // greater or equal then assign head to the list whose value is smaller
  if (list1->val <= list2->val) {
    // assign head to list1 beacuse list1 value is smaller than or equal to
    // list2 value, we do this because we want to return the list in ascending
    // order
    head = list1;
    // assign list1 current head to next node
    list1 = list1->next;
  } else {
    // explanation same as above if condition
    head = list2;
    list2 = list2->next;
  }
  // save the value of head in temp so that we iterate using temp and our head
  // value is not disturbed
  temp = head;

  // iterate the remaining list until anyone of them become null
  while (list1 != nullptr && list2 != nullptr) {
    // check which node has smaller in both list and assign it first to temp
    if (list1->val <= list2->val) {
      temp->next = list1;
      list1 = list1->next;
    } else {
      temp->next = list2;
      list2 = list2->next;
    }
    // assign temp to newly assigned node
    temp = temp->next;
  }
  // now check which list is not completly iterated till now and then assign the
  // remaining node to temp->next

  // if list1 has remaining node
  if (list1) {
    temp->next = list1;
  }
  // if lsit2 has remaining node
  if (list2) {
    temp->next = list2;
  }

  // return head
  return head;
}
int main() { return 0; }