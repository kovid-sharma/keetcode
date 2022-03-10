/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    vector<int>pre;
    void traver(Node*now){
        if(now==NULL)return;
        pre.push_back(now->val);
        for(Node*child:now->children){
            traver(child);
        }
    }
    vector<int> preorder(Node* root) {
        traver(root);
        return pre;
    }
};