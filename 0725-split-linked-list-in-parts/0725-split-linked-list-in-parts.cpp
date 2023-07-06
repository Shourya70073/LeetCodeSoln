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
    int len(ListNode *head){
        ListNode*temp=head;
        int count=0;
        while(temp!=nullptr){
            count++;
            temp=temp->next;
        }
        return count;
    }
    vector<ListNode*> splitListToParts(ListNode* head, int k) {
        vector<ListNode*>fans;
        int l=len(head);
        if(l==k){
            while(head!=nullptr){
                fans.push_back(new ListNode(head->val));
                head=head->next;
            }
            
        }
        if(l>k){
            if(l%k==0){
                int numberOfParts=l/k;
                ListNode *temp=head;
                for(int i=1;i<=k;i++){
                    ListNode *ans=new ListNode();
                    ListNode *ns=ans;
                    int count=0;
                    while(count<numberOfParts){
                    ans->next=new ListNode(temp->val);
                        temp=temp->next;
                        ans=ans->next;
                        count++;
                      }
                    fans.push_back(ns->next);
                    
                }
            }
            else{
                int numberOfParts=l/k;
                int extra=l%k;
                ListNode *temp=head;
                for(int i=1;i<=k;i++){
                    ListNode *ans=new ListNode();
                    ListNode *ns=ans;
                    int count=0;
                   
                    while(count<numberOfParts){
                    ans->next=new ListNode(temp->val);
                        temp=temp->next;
                        ans=ans->next;
                        count++;
                      }
 if (extra > 0 ) {
    ans->next = new ListNode(temp->val);
    temp = temp->next;
    ans = ans->next;
    extra--;
}
                    fans.push_back(ns->next);
                  
                    
                }
                
            }
        }
        if(l<k){
            
            for(int i=1;i<=k;i++){
                 ListNode *temp=nullptr;
            if(head!=nullptr)
                 temp=new ListNode(head->val);
                fans.push_back(temp);
                if(head!=nullptr)
                    head=head->next;
            }
        }
        return fans;
    }
};