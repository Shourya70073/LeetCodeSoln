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
    ListNode* reverseList(ListNode *head){
        if(head==nullptr || head->next==nullptr){
           return head;
        }
        
        ListNode *small=reverseList(head->next);
        head->next->next=head;
        head->next=nullptr;
        return small;
        
    }
    int getDecimalValue(ListNode* head) {
        ListNode *h=reverseList(head);
        int ans=0;
        int pos=0;
        while(h!=nullptr){
            ans=ans+(pow(2,pos)* (h->val));
            pos++;
            h=h->next;
            
        }
        return ans;
    }
};