class Solution {
  private:
    void traverse(Node* root, vector<int>& result) {
        if (root == nullptr) {
            return;
        }
        
        traverse(root->left, result);
        
    
        traverse(root->right, result);
         
         
        result.push_back(root->data);
    }

  public:
    vector<int> postOrder(Node* root) {
        vector<int> result;
        traverse(root, result);
        return result;
    }
};