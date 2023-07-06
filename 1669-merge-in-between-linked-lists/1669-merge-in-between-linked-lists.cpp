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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        
        ListNode *first=list1;
        ListNode *second=list1;
        
        for(int i=1;i<a;i++){
            first=first->next;
        }
        for(int i=1;i<=b;i++){
            second=second->next;
        }
        first->next=list2;
        ListNode *list2end=list2;
        while(list2end->next!=nullptr){
            list2end=list2end->next;
        }
        
        list2end->next=second->next;
        return list1;
    }
};