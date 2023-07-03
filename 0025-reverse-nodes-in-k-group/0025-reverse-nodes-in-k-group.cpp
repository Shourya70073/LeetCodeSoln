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
    void reverse(ListNode *s,ListNode *e){
        ListNode *prev=nullptr;
        ListNode *curr=s;
        ListNode *forw=s->next;
        
        while(prev!=e){
            curr->next=prev;
            prev=curr;
            curr=forw;
            if(forw!=nullptr){
                forw=forw->next;
            }
        }
    }
    ListNode* reverseKGroup(ListNode* head, int k) {
        if(head==nullptr || head->next==nullptr || k==1){
            return head;
        }
        ListNode *s=head;
        ListNode *e=head;
        int i=k-1;
        while(i!=0){
           
            
                e=e->next;
             if(e==nullptr){
                return head;
            }
            
            i--;
            
        }
        ListNode *h=reverseKGroup(e->next,k);
        reverse(s,e);
        s->next=h;
        return e;
    }
};