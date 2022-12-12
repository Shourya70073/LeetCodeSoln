//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h> 
using namespace std; 

struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};

void printList(Node* node) 
{ 
    while (node != NULL) { 
        cout << node->data; 
        node = node->next; 
    }  
    cout<<"\n";
} 


// } Driver Code Ends
//User function template for C++

/* 

struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
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
    Node* addOne(Node *head) 
    {
        Node *n=new Node(1);
        return addTwoLists(head,n);
    }
};

//{ Driver Code Starts.

int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        
        Node* head = new Node( s[0]-'0' );
        Node* tail = head;
        for(int i=1; i<s.size(); i++)
        {
            tail->next = new Node( s[i]-'0' );
            tail = tail->next;
        }
        Solution ob;
        head = ob.addOne(head);
        printList(head); 
    }
    return 0; 
} 

// } Driver Code Ends