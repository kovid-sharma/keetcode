/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class BSTIterator {
public:
    vector<int>store;
    int idx=0;
    void traverse(TreeNode*root)
    {
        if(root)
        {
            traverse(root->left);
            store.push_back(root->val);
            traverse(root->right);
        }
    }
    BSTIterator(TreeNode* root) {
        
        traverse(root);
    }
    
    int next() {
        return store[idx++];
    }
    
    bool hasNext() {
        return idx<store.size();
    }
};

/**
 * Your BSTIterator object will be instantiated and called as such:
 * BSTIterator* obj = new BSTIterator(root);
 * int param_1 = obj->next();
 * bool param_2 = obj->hasNext();
 */