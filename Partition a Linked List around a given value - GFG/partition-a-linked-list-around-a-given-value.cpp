// { Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

/* Link list node */
struct Node* partition(struct Node* head, int x);

struct Node {
    int data;
    struct Node* next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};

/* Function to print linked list */
void printList(struct Node* node) {
    while (node != NULL) {
        printf("%d ", node->data);
        node = node->next;
    }
    printf("\n");
}

/* Drier program to test above function*/
int main(void) {
    int t;
    cin >> t;

    while (t--) {
        struct Node* head = NULL;
        struct Node* temp = NULL;
        int n;
        cin >> n;

        for (int i = 0; i < n; i++) {
            int value;
            cin >> value;
            if (i == 0) {
                head = new Node(value);
                temp = head;
            } else {
                temp->next = new Node(value);
                temp = temp->next;
            }
        }

        int k;
        cin >> k;

        // Solution ob;

        head = partition(head, k);
        printList(head);
    }

    return (0);
}
// } Driver Code Ends


// User function Template for C++

/*struct Node
{
    int data;
    struct Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }
    struct Node* partition(struct Node* head, int k) {
    Node* cur=head;
    Node* lessHead=new Node(-1), *less=lessHead;
    Node* equalHead=new Node(-1), *equal=equalHead;
    Node* highHead=new Node(-1), *high=highHead;
    while(cur){
        if(cur->data<k) less->next=cur, less=less->next;
        else if(cur->data>k) high->next=cur, high=high->next;
        else equal->next=cur, equal=equal->next;
        cur=cur->next;
    }
    high->next=NULL;
    equal->next=highHead->next;
    less->next=equalHead->next;
    return lessHead->next;
}

};*/
struct Node* partition(struct Node* head, int k) {
    Node* cur=head;
    Node* lessHead=new Node(-1), 
    *less=lessHead;
    Node* equalHead=new Node(-1),
    *equal=equalHead;
    Node* highHead=new Node(-1),
    *high=highHead;
    while(cur){
        if(cur->data<k) less->next=cur, less=less->next;
        else if(cur->data>k) high->next=cur, high=high->next;
        else equal->next=cur, equal=equal->next;
        cur=cur->next;
    }
    high->next=NULL;
    equal->next=highHead->next;
    less->next=equalHead->next;
    return lessHead->next;
}