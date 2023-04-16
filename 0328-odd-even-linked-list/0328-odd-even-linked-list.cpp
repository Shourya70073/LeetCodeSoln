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
    ListNode* oddEvenList(ListNode* head) {
        if(head==nullptr){
            return head;
        }
        else if(head->next==nullptr){
            return head;
        }
        else if(head->next->next==nullptr){
            return head;
        }
        else{
            ListNode *o=head;
            ListNode *e=head->next;
            ListNode *eh=e;
            
            while(e!=nullptr && e->next!=nullptr){
             o->next=o->next->next;
             e->next=e->next->next;
                o=o->next;
                e=e->next;
            }
            
            o->next=eh;
            return head;
        }
    }
};