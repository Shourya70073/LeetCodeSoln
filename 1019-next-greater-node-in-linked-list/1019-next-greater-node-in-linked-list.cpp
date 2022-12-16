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
        if(head==nullptr){
            return head;
        }
        ListNode *temp=nullptr;
        ListNode *n=head->next;
        while(n){
           head->next=temp;
           temp=head;
           head=n;
              n=n->next;
          
        }
        head->next=temp;
        return head;
    }
    
    vector<int> nextLargerNodes(ListNode* head) {
        ListNode *h=reverseList(head);
        stack<int>st;
        ListNode *t=h;
        vector<int>vt;
        while(t!=nullptr){
            while(!st.empty() && st.top()<=t->val){
                st.pop();
            }
            if(st.empty()){
               vt.push_back(0);
            }
            else{
                vt.push_back(st.top());
            }
            st.push(t->val);
            t=t->next;
        }
        
        reverse(vt.begin(),vt.end());
        return vt;
        
    }
};