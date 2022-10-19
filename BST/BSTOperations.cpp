# include <iostream>
# include <cstdlib>
using namespace std;


struct Node//Declaration of BST NODE
{
   int info;
   Node *left;
   Node *right;
}*root;
class BST // BST CLASS
{
   public://functions declaration Of all operations
   void search(Node *, int);
   void find(int, Node **, Node **);
   void insert(Node *, Node *);
   void del(int);
   void casea(Node *,Node*);
   void caseb(Node *,Node *);
   void casec(Node *,Node *);
   void preorder(Node *);
   void inorder(Node *);
   void postorder(Node *);
   void show(Node *, int);
   BST()
   {
      root = NULL;
   }
};
void BST::find(int i, Node **par, Node **loc)//find the position of the item
{
   Node *ptr, *ptrsave;
   if (root == NULL)
   {
      *loc = NULL;
      *par = NULL;
      return;
   }
   if (i == root->info)
   {
      *loc = root;
      *par = NULL;
      return;
   }
   if (i < root->info)
   ptr = root->left;
   else
   ptr = root->right;
   ptrsave = root;
   while (ptr != NULL)
   {
      if (i == ptr->info)
      {
         *loc = ptr;
         *par = ptrsave;
         return;
      }
      ptrsave = ptr;
      if (i < ptr->info)
      ptr = ptr->left;
      else
      ptr = ptr->right;
   }
   *loc = NULL;
   *par = ptrsave;
}
void BST::search(Node *root, int data) //searching
{
   int depth = 0;
   Node *temp = new Node;
   temp = root;
   while(temp != NULL)
   {
      depth++;
      if(temp->info == data)
      {
         cout<<"\nData found at depth: "<<depth<<endl;
         return;
      }
      else if(temp->info > data)
      temp = temp->left;
      else
      temp = temp->right;
   }
   cout<<"\n Data not found"<<endl;
   return;
}
void BST::insert(Node *tree, Node *newnode)//function to insert data
{
   if (root == NULL)
   {
      root = new Node;
      root->info = newnode->info;
      root->left= NULL;
      root->right= NULL;
      cout<<"Root Node is Added"<<endl;
      return;
   }
   if (tree->info == newnode->info)
   {
      cout<<"Element already in the tree"<<endl;
      return;
   }
   if (tree->info > newnode->info)
   {
      if (tree->left != NULL)
      {
         insert(tree->left, newnode);
      }
      else
      {
         tree->left= newnode;
         (tree->left)->left = NULL;
         (tree->left)->right= NULL;
         cout<<"Node Added To Left"<<endl;
         return;
      }
   }
   else
   {
      if (tree->right != NULL)
      {
         insert(tree->right, newnode);
      }
      else
      {
         tree->right = newnode;
         (tree->right)->left= NULL;
         (tree->right)->right = NULL;
         cout<<"Node Added To Right"<<endl;
         return;
      }
   }
}
void BST::del(int i)//delete function
{
   Node *par, *loc;
   if (root == NULL)
   {
      cout<<"Tree empty"<<endl;
      return;
   }
   find(i, &par, &loc);
   if (loc == NULL)
   {
      cout<<"Item not present in tree"<<endl;
      return;
   }
   if (loc->left == NULL && loc->right == NULL)
   {
      casea(par, loc);
      cout<<"item deleted"<<endl;
   }
   if (loc->left!= NULL && loc->right == NULL)
   {
      caseb(par, loc);
      cout<<"item deleted"<<endl;
   }
   if (loc->left== NULL && loc->right != NULL)
   {
      caseb(par, loc);
      cout<<"item deleted"<<endl;
   }
   if (loc->left != NULL && loc->right != NULL)
   {
      casec(par, loc);
      cout<<"item deleted"<<endl;
   }
   free(loc);
}
void BST::casea(Node *par, Node *loc )
{
   if (par == NULL)
{
   root= NULL;
}
else
{
   if (loc == par->left)
   par->left = NULL;
   else
   par->right = NULL;
   }
}
void BST::caseb(Node *par, Node *loc)
{
   Node *child;
   if (loc->left!= NULL)
      child = loc->left;
   else
      child = loc->right;
   if (par == NULL)
   {
      root = child;
   }
   else
   {
      if (loc == par->left)
         par->left = child;
      else
         par->right = child;
   }
}
void BST::casec(Node *par, Node *loc)
{
   Node *ptr, *ptrsave, *suc, *parsuc;
   ptrsave = loc;
   ptr = loc->right;
   while (ptr->left!= NULL)
   {
      ptrsave = ptr;
      ptr = ptr->left;
   }
   suc = ptr;
   parsuc = ptrsave;
   if (suc->left == NULL && suc->right == NULL)
      casea(parsuc, suc);
   else
      caseb(parsuc, suc);
   if (par == NULL)
   {
      root = suc;
   }
   else
   {
      if (loc == par->left)
         par->left = suc;
      else
         par->right= suc;
   }
   suc->left = loc->left;
   suc->right= loc->right;
}
void BST::preorder(Node *ptr)//preorder traversal
{
   if (root == NULL)
   {
      cout<<"Tree is empty"<<endl;
      return;
   }
   if (ptr != NULL)
   {
      cout<<ptr->info<<" ";
      preorder(ptr->left);
      preorder(ptr->right);
   }
}
void BST::inorder(Node *ptr)//inorder traversal
{
   if (root == NULL)
   {
      cout<<"Tree is empty"<<endl;
      return;
   }
   if (ptr != NULL)
   {
      inorder(ptr->left);
      cout<<ptr->info<<" ";
      inorder(ptr->right);
   }
}
void BST::postorder(Node *ptr)//postorder traversal
{
   if (root == NULL)
   {
      cout<<"Tree is empty"<<endl;
      return;
   }
   if (ptr != NULL)
   {
      postorder(ptr->left);
      postorder(ptr->right);
      cout<<ptr->info<<" ";
   }
}
void BST::show(Node *ptr, int level)//print the tree
{
   int i;
   if (ptr != NULL)
   {
      show(ptr->right, level+1);
      cout<<endl;
      if (ptr == root)
         cout<<"Root->: ";
      else
      {
         for (i = 0;i < level;i++)
         cout<<" ";
      }
      cout<<ptr->info;
      show(ptr->left, level+1);
   }
}
int main()

{
   int c, n,item;
   BST bst;
   Node *t;
   while (1)
   {
      cout<<"1.Insert Element "<<endl;
      cout<<"2.Delete Element "<<endl;
      cout<<"3.Search Element"<<endl;
      cout<<"4.Inorder Traversal"<<endl;
      cout<<"5.Preorder Traversal"<<endl;
      cout<<"6.Postorder Traversal"<<endl;
      cout<<"7.Display the tree"<<endl;
      cout<<"8.Quit"<<endl;
      cout<<"Enter your choice : ";
      cin>>c;
      switch(c)
      {
         case 1:
            t = new Node;
            cout<<"Enter the number to be inserted : ";
            cin>>t->info;
            bst.insert(root, t);
            break;
         case 2:
            if (root == NULL)
            {
               cout<<"Tree is empty, nothing to delete"<<endl;
               continue;
            }
            cout<<"Enter the number to be deleted : ";
            cin>>n;
            bst.del(n);
            break;
         case 3:
            cout<<"Search:"<<endl;
            cin>>item;
            bst.search(root,item);
            break;
         case 4:
            cout<<"Inorder Traversal of BST:"<<endl;
            bst.inorder(root);
            cout<<endl;
            break;
         case 5:
            cout<<"Preorder Traversal of BST:"<<endl;
            bst.preorder(root);
            cout<<endl;
            break;
         case 6:
            cout<<"Postorder Traversal of BST:"<<endl;
            bst.postorder(root);
            cout<<endl;
            break;
         case 7:
            cout<<"Display BST:"<<endl;
            bst.show(root,1);
            cout<<endl;
            break;
         case 8:
            exit(1);
         default:
            cout<<"Wrong choice"<<endl;
      }
   }
}