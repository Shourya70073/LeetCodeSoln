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
    ListNode* mergeTwoLists(ListNode* n1, ListNode* n2) {
        ListNode*p1=n1;ListNode*p2=n2;ListNode*s=new ListNode();
    s->val=-1;
    s->next=NULL;
    ListNode* t=s;
    
    while(p1!=NULL && p2!=NULL){
        if((p1->val)<=(p2->val)){
          t->next=p1;
          p1=p1->next;
          t=t->next;
        }
        else{
        t->next=p2;
        p2=p2->next;
        t=t->next;
        }  
    }
    if(p1==NULL){
        t->next=p2;
        return s->next;
    }
    else{
         t->next=p1;
        return s->next;
    }
    }
   ListNode* mergeKLists(vector<ListNode*>& lists) {
       ListNode *head=nullptr;
      for(int i=0;i<lists.size();i++){
                  head=mergeTwoLists(head,lists[i]);
      }
       return head;
}

    
};