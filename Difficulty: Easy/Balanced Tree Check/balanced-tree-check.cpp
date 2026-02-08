/*
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    // Constructor to initialize a new node
    Node(int val) {
        data = val;
        left = NULL;
        right = NULL;
    }
};
*/

class Solution {
  public:
  
    int height(Node* root){
        if(!root) return 0;
        int left = height(root->left);
        int right = height(root->right);
        
        return max(left,right) + 1;
    }
    bool isBalanced(Node* root) {
        // code here
        if(!root) return true;
        int left = height(root->left);
        int right = height(root->right);
        
        if(abs(left-right) >  1) return false;
        
        return isBalanced(root->left) && isBalanced(root->right);
        
    }
};