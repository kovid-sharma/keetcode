class List{
  public:
    int val;
    List* next;
    List(int x){
        val=x;
        next=NULL;
    }
};
class MyLinkedList {
public:
    List* head;
    int sz;
    MyLinkedList() {
        sz=0;
        head=NULL;
    }
    
    int get(int index) {
        if(index<0 or index>=sz){
            return -1;
        }
        List* tmp=head;
        for(int i=0;i<index;i++)
            tmp=tmp->next;
        return tmp->val;
    }
    
    void addAtHead(int val) {
        addAtIndex(0,val);
    }
    
    void addAtTail(int val) {
        addAtIndex(sz,val);
    }
    
    void addAtIndex(int index, int val) {
        if(index>sz or index<0){
            return;
        }
        List* curr=head;
        List* add=new List(val);
        if(index==0){
            add->next=curr;
            head=add;
            sz++;
        }
        else{
            for(int i=0;i<index-1;i++)
                curr=curr->next;
            add->next=curr->next;
            curr->next=add;
            sz++;
        }
        
    }
    
    void deleteAtIndex(int index) {
        if(index<0 or index>=sz){
            return;
        }
        List * curr=head;
        if(index==0){
            curr=curr->next;
            delete head;
            head=curr;
            sz--;
        }
        else{
           for(int i=0;i<index-1;i++)
                curr=curr->next; 
            List* del=curr->next->next;
            curr->next=del;
            sz--;
        }
    }
};

/**
 * Your MyLinkedList object will be instantiated and called as such:
 * MyLinkedList* obj = new MyLinkedList();
 * int param_1 = obj->get(index);
 * obj->addAtHead(val);
 * obj->addAtTail(val);
 * obj->addAtIndex(index,val);
 * obj->deleteAtIndex(index);
 */