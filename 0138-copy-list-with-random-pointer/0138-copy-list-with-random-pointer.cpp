/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
     void insertattail(Node *&head,Node *&tail,int data){
        Node *n=new Node(data);
        n->next=NULL;
        if(head==NULL){
            head=n;
            tail=n;
            
        }
        else{
            tail->next=n;
            tail=n;
        }
    }
    
    
    Node *copyRandomList(Node *head)
    {
       Node *ch=NULL;
       Node *ct=NULL;
       
       Node *temp=head;
      
      
      //Clonig of LL Done.
       while(temp!=NULL){
           insertattail(ch,ct,temp->val);
           temp=temp->next;
       }
       
       //Mapping of LL.
       
       Node *temp1=head;
       Node *temp2=ch;
       
       unordered_map<Node *,Node*>mp;
       
       while(temp1!=NULL){
           mp[temp1]=temp2;
           temp1=temp1->next;
           temp2=temp2->next;
       }
       
       Node *temp3=head;
       Node *temp4=ch;
       
       while(temp4!=NULL){
           temp4->random=mp[temp3->random];
           temp4=temp4->next;
           temp3=temp3->next;
       }
       
       
       return ch;
    }
};