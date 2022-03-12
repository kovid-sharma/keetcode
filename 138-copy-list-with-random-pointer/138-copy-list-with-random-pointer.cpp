class Solution {
public:
    Node* copyRandomList(Node* head) {
        if(head==NULL) return NULL;
    Node*org;
    Node*cpy;
    for(org=head;org!=NULL;org=org->next->next){
        cpy=new Node(org->val);
        cpy->next=org->next;
        org->next=cpy;
    }     
    for(org=head;org!=NULL;org=org->next->next){
        if(org->random!=NULL)
        org->next->random=org->random->next;
    }
        Node*ans=head->next;
        for(org=head;org!=NULL;org=org->next){
            cpy=org->next;
            org->next=cpy->next;
            if(cpy->next)
            cpy->next=cpy->next->next;
        }
        return ans;
    
}
};
