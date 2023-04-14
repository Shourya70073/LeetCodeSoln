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
        if(head==nullptr){
            return 0;
        }
        unordered_map<ListNode *,int>mp;
        while(head!=nullptr){
         mp[head]=1;
            head=head->next;
            if(mp[head]){
                return 1;
            }
        }
        return 0;
    }
};