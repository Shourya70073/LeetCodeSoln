/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==nullptr ){
            return nullptr;
        }
        else if(head->next==nullptr){
            return head;
        }
        ListNode *temp=head;
        int len=0;
        while(temp){
            len++;
            temp=temp->next;
        }
            k=k%len;
        ListNode *t1=head;
        ListNode *t2=head->next;
        ListNode *dummy=new ListNode();
        dummy->next=head;
        
       for(int i=0;i<k;i++){
            while(t2->next!=nullptr){
            t1=t2;
            t2=t2->next;
        }
           t2->next=head;
           head=t2;
           t1->next=nullptr;
           
       }
        return head;
    }
};