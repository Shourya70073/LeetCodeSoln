//{ Driver Code Starts
// driver

#include <bits/stdc++.h>
using namespace std;

/* Linked list Node */
struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

struct Node* buildList(int size)
{
    int val;
    cin>> val;
    
    Node* head = new Node(val);
    Node* tail = head;
    
    for(int i=0; i<size-1; i++)
    {
        cin>> val;
        tail->next = new Node(val);
        tail = tail->next;
    }
    
    return head;
}

void printList(Node* n)
{
    while(n)
    {
        cout<< n->data << " ";
        n = n->next;
    }
    cout<< endl;
}


// } Driver Code Ends
/* node for linked list:

struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

*/

class Solution
{
    public:
   
   Node* reverseList(Node* head) {
        if(head==nullptr || head->next==nullptr){
            return head;
        }
        Node *smallHead=reverseList(head->next);
        head->next->next=head;
        head->next=nullptr;
        return smallHead;
    }
    
    struct Node* addTwoLists(struct Node* l1, struct Node* l2)
    {
        l1=reverseList(l1);
        l2=reverseList(l2);
        Node *t=new Node(99);
        Node *temp=t;
        int carry=0;
        
        while(l1!=nullptr || l2!=nullptr || carry){
            int sum=0;
            
            if(l1!=nullptr){
                sum+=l1->data;
                l1=l1->next;
            }
            
            if(l2!=nullptr){
           sum+=l2->data;
                l2=l2->next;
            }
            
            sum=sum+carry;
            carry=sum/10;
            
            Node *n=new Node(sum%10);
            temp->next=n;
            temp=temp->next;
        }
        
        Node *p= t->next;
        t->next=NULL;
        return reverseList(p);
    }
};


//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, m;
        
        cin>>n;
        Node* first = buildList(n);
        
        cin>>m;
        Node* second = buildList(m);
        Solution ob;
        Node* res = ob.addTwoLists(first,second);
        printList(res);
    }
    return 0;
}

// } Driver Code Ends