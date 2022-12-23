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
    ListNode* reverseList(ListNode* head) {
        if(head==nullptr || head->next==nullptr){
            return head;
        }
        ListNode *smallHead=reverseList(head->next);
        head->next->next=head;
        head->next=nullptr;
        return smallHead;
    }
    
    void reorderList(ListNode* &head) {
        ListNode *slow=head;
        ListNode *fast=head;
        while(fast->next!=nullptr && fast->next->next!=nullptr){
            fast=fast->next->next;
            slow=slow->next;
        }
        ListNode *t=slow->next;
        ListNode *rev=reverseList(t);
        slow->next=nullptr;
        
        ListNode *tp=head;
        int i=0;
        while(tp!=nullptr){
            if(i%2==0){
               ListNode *temp=tp->next;
                tp->next=rev;
                ListNode *temp1=rev;
                if(rev)
                rev=rev->next;
                if(temp1)
                temp1->next=temp;
            }
            tp=tp->next;
            i++;
        }
    }
};