#include<bits/stdc++.h>
using namespace std;
class Node {
    
    public: 
        int data;
        Node* left;
        Node* right;

        Node (){
            data = 0;
            left = NULL;
            right  = NULL;
        }
        Node (int data){
            this->data = data;
            left = NULL;
            right  = NULL;
        }

        Node* buildTree(){
            int d;
            cin>>d;
            
            if(d ==-1){
                return NULL;
        
            }
            Node* root  = new Node(d);
            root->left = buildTree();
            root->right = buildTree();
            return root;
        }

        
};
// Preorder Traversal
void printPreOrder(Node* root){
            if(root == NULL){
                return;
            }
            cout<< root->data<<" ";
            printPreOrder(root->left);
            printPreOrder(root->right);
}

//Inorder Traversal
void printInOrder(Node* root){
    if(root == NULL){
        return;
    }
    printInOrder(root->left);
    cout<<root->data<<" ";
    printInOrder(root->right);

}

void printPostOrder(Node* root){
    if(root == NULL){
        return;
    }
    printPostOrder(root->left);
    printPostOrder(root->right);
    cout<<root->data<<" ";

}

int height(Node* root){
    if(root == NULL){
        return 0;
    }
    int lh = height(root->left);
    int rh = height(root->right);
    return max(lh,rh)+ 1;
}
void kthLevel(Node* root, int k){
    if(root ==NULL){
        return;
    }
    if(k==1){
        cout<<root->data<<" ";
        return;
    }
    kthLevel(root->left, k-1);
    kthLevel(root->right, k-1);
    return;
}

void allLevel(Node* root){
    int tree_height = height(root);
    for(int i=1;i<=tree_height;i++){
        kthLevel(root, i);
        cout<<endl;
    }
}

void BFS(Node* root){
    queue<Node*> bfs_queue;
    bfs_queue.push(root);
    while(!bfs_queue.empty()){
        Node* f = bfs_queue.front();
        cout<<f->data<<",";
        bfs_queue.pop();
        if(f->left != NULL){
            bfs_queue.push(f->left);
        }
        if(f->right != NULL){
            bfs_queue.push(f->right);
        }
    }
    return;
}
int main(){
   
    Node* root = new Node();

    root = root->buildTree();

    printPreOrder(root);
    cout<<endl;
    printInOrder(root);
    cout<<endl;
    printPostOrder(root);

    int tree_height = height(root);
    cout<<endl<<tree_height;
    cout<<endl;
    kthLevel(root, 1);
    cout<<endl;
    kthLevel(root, 2);
    cout<<endl;
    kthLevel(root, 3);
    cout<<endl;
    kthLevel(root, 4);
    cout<<endl;
    allLevel(root);

    cout<<endl;

    BFS(root);

return 0;
}
// input = 8 10 1 -1 -1 6 9 -1 -1 7 -1 -1 3 -1 14 13 -1 -1 -1