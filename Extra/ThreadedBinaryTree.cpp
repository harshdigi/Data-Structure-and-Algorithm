#include <iostream>
#define MAX_VALUE 5000
using namespace std;
class Node { //node declaration
   public:
      int data;
   Node *left, *right;
   bool leftThread, rightThread;
};
class ThreadedBinaryTree {
   private:
   Node *root;
   public:
   ThreadedBinaryTree() { //constructor to initialize the variables
      root= new Node();
      root->right= root->left= root;
      root->leftThread = true;
      root->data = MAX_VALUE;
   }
   void makeEmpty() { //clear tree
      root= new Node();
      root->right = root->left = root;
      root->leftThread = true;
      root->data = MAX_VALUE;
   }
   void insert(int key) {
      Node *p = root;
      for (;;) {
         if (p->data< key) {  //move to right thread
            if (p->rightThread)
               break;
            p = p->right;
         } else if (p->data > key) { // move to left thread
            if (p->leftThread)
               break;
            p = p->left;
         } else {
            return;
         }
      }
      Node *temp = new Node();
      temp->data = key;
      temp->rightThread= temp->leftThread= true;
      if (p->data < key) {
         temp->right = p->right;
         temp->left= p;
         p->right = temp;
         p->rightThread= false;
      } else {
         temp->right = p;
         temp->left = p->left;
         p->left = temp;
         p->leftThread = false;
      }
   }
   bool search(int key) {
      Node *temp = root->left;
      for (;;) {
      if (temp->data < key) { //search in left thread
      if (temp->rightThread)
            return false;
         temp = temp->right;
      } else if (temp->data > key) { //search in right thread
         if (temp->leftThread)
            return false;
         temp = temp->left;
      } else {
         return true;
      }
   }
}
void Delete(int key) {
   Node *dest = root->left, *p = root;
   for (;;) { //find Node and its parent.
      if (dest->data < key) {
         if (dest->rightThread)
            return;
         p = dest;
         dest = dest->right;
      } else if (dest->data > key) {
         if (dest->leftThread)
            return;
         p = dest;
         dest = dest->left;
      } else {
         break;
      }
   }
   Node *target = dest;
   if (!dest->rightThread && !dest->leftThread) {
      p = dest;  //has two children
      target = dest->left;   //largest node at left child
      while (!target->rightThread) {
         p = target;
         target = target->right;
      }
      dest->data= target->data; //replace mode
   }
   if (p->data >= target->data) { //only left child
      if (target->rightThread && target->leftThread) {
         p->left = target->left;
         p->leftThread = true;
      } else if (target->rightThread) {
         Node*largest = target->left;
         while (!largest->rightThread) {
            largest = largest->right;
         }
         largest->right = p;
         p->left= target->left;
      } else {
         Node *smallest = target->right;
         while (!smallest->leftThread) {
            smallest = smallest->left;
         }
         smallest->left = target->left;
         p->left = target->right;
      }
   } else {//only right child
      if (target->rightThread && target->leftThread) {
         p->right= target->right;
         p->rightThread = true;
      } else if (target->rightThread) {
         Node *largest = target->left;
         while (!largest->rightThread) {
            largest = largest->right;
         }
         largest->right= target->right;
         p->right = target->left;
      } else {
         Node *smallest = target->right;
         while (!smallest->leftThread) {
            smallest = smallest->left;
         }
         smallest->left= p;
         p->right= target->right;
      }
   }
}
void displayTree() { //print the tree
   Node *temp = root, *p;
   for (;;) {
      p = temp;
      temp = temp->right;
      if (!p->rightThread) {
         while (!temp->leftThread) {
            temp = temp->left;
         }
      }
      if (temp == root)
         break;
      cout<<temp->data<<" ";
   }
   cout<<endl;
}
};
int main() {
   ThreadedBinaryTree tbt;
   cout<<"ThreadedBinaryTree\n";
   char ch;
   int c, v;  
   while(1) {
      cout<<"1. Insert "<<endl;
      cout<<"2. Delete"<<endl;
      cout<<"3. Search"<<endl;
      cout<<"4. Clear"<<endl;
      cout<<"5. Display"<<endl;
      cout<<"6. Exit"<<endl;
      cout<<"Enter Your Choice: ";
      cin>>c;
      //perform switch operation
      switch (c) {
         case 1 :
            cout<<"Enter integer element to insert: ";
            cin>>v;
            tbt.insert(v);
            break;
         case 2 :
            cout<<"Enter integer element to delete: ";
            cin>>v;
            tbt.Delete(v);
            break;
         case 3 :
            cout<<"Enter integer element to search: ";
            cin>>v;
            if (tbt.search(v) == true)
               cout<<"Element "<<v<<" found in the tree"<<endl;
            else
               cout<<"Element "<<v<<" not found in the tree"<<endl;
            break;
         case 4 :
            cout<<"\nTree Cleared\n";
            tbt.makeEmpty();
            break;
         case 5:
            cout<<"Display tree: \n ";
            tbt.displayTree();
            break;
         case 6:
            exit(1);
         default:
            cout<<"\nInvalid type! \n";
      }
   }
   cout<<"\n";
   return 0;
}