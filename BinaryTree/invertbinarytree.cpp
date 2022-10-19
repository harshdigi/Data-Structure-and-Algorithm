#include<bits/stdc++.h>
using namespace std;
TreeNode* invertTree(TreeNode* node) {
        if(node == NULL){
            return node;
        }
        invertTree(node->left); 
		invertTree(node->right); 
	
		/* swap the pointers in this node */
		TreeNode* temp = node->left; 
		node->left = node->right; 
		node->right = temp;
        return node;
    }
int main(){

return 0;
}