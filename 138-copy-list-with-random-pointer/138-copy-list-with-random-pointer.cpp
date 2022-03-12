class Solution {
public:
    Node* copyRandomList(Node* head) {
        map<Node*,Node*>mp;
        Node*traver=head;
        while(traver!=NULL)
        {
            mp[traver]=new Node(traver->val);
            traver=traver->next;
        }
        for(auto &it:mp){
            Node* nya= it.first;
            mp[nya]->next=mp[nya->next];
            mp[nya]->random=mp[nya->random];
        }
        return mp[head];
    }
};