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
    ListNode * rev(ListNode *prev, ListNode *head, ListNode *t1){
          if(head==nullptr || head->next==nullptr){
                 return head;
          }
          head->next=prev;
        ListNode *temp=rev(head,t1,t1->next);
        t1->next=head;
        return temp;
    }
    ListNode* reverseList(ListNode* head) {
        if(head==nullptr || head->next==nullptr){
                 return head;
          }
        return rev(nullptr,head,head->next);
    }
};