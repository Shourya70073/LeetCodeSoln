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
    ListNode *detectCycle(ListNode *head) {
        unordered_map<ListNode*,int>mp;
        while(!mp[head]){
mp[head]=1;
            if(head==nullptr){
                return nullptr;
            }
            head=head->next;
        }
        return head;
    }
};