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
    ListNode* swapPairs(ListNode* head) {
        if(head==nullptr || head->next==nullptr)
             return head;
        
        
       ListNode * ch=swapPairs(head->next->next);
       ListNode *t=head->next;
       t->next=head;
       head->next=ch;
       return t;
       
        
        
    }
};