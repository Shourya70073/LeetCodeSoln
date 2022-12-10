/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        if(head==nullptr || head->next==nullptr){
        return false;
        }
        ListNode *s=head;
        ListNode *f=head;
        while(f!=nullptr && f->next!=nullptr){
            s=s->next;
            f=f->next->next;
            if(s==f){
                return true;
            }
        }
        return  false;
    }
};