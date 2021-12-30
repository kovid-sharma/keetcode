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
        //levelorder
        Node*leftline=root;
        if(root==NULL)return root;
        while(leftline!=NULL)
        {   
            Node*level=leftline;
            while(level!=NULL and level->left!=NULL)
            {
                level->left->next=level->right;
                if(level->next!=NULL)
                {
                    level->right->next=level->next->left;
                }
                level=level->next;
            }
            leftline=leftline->left;
        }
        return root;
    }
};