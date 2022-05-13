/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};
*/

class Solution {
public:
    Node* connect(Node* root) {
        if(root==NULL)return root;
        queue<Node*>q;
        q.push(root);
        while(!q.empty())
        {   
            Node* prev=NULL;
            int sz=q.size();
            for(int i=0;i<sz;i++)
            {
                Node* fro=q.front();
                q.pop();
                fro->next=prev;
                prev=fro;
                if(fro->right)
                    q.push(fro->right);
                if(fro->left)
                    q.push(fro->left);
            }
        }
        return root;
    }
};