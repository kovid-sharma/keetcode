/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
       //method 2//first was to use map to store that we have reached that listnode once or not this method is standard method using slow and fast pointers what we do is that at some point if there is a cycle the fast and slow eill become same if there is no cycle there will be no cycle and we will return null but after they are matched and there is a cycle we will be resetting our slow pointer to the head
        if(head==NULL or head->next==NULL)return NULL;
        
        ListNode*slower=head;
        ListNode*fasteer=head;
        while(fasteer!=NULL and fasteer->next!=NULL)
        {
            slower=slower->next;
            fasteer=fasteer->next->next;
            if(fasteer==slower)
                break;
        }
        slower=head;
        while(fasteer!=NULL and fasteer->next!=NULL)
        {   
            if(slower==fasteer)return slower;
            slower=slower->next;
            fasteer=fasteer->next;
        }
        return NULL;
    }
};