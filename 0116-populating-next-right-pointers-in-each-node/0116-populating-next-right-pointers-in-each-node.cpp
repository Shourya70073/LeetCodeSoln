/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};
*/

class Solution {
public:
    Node* connect(Node* root) {
        if(!root){
            return root;
        }
        if(!root->left && !root->right){
            return root;
        }
        
        queue<Node*>qt;
        qt.push(root);
        
        while(!qt.empty()){
            int s=qt.size();
            Node *prev=nullptr;
            for(int i=0;i<s;i++){
           Node *temp=qt.front();
           if(temp->left){
            qt.push(temp->left);
           }
                if(temp->right){
                    qt.push(temp->right);
                }
           if(i==s-1){
               temp->next=nullptr;
           }
                if(prev){
         prev->next=temp;
                }
                prev=temp;
          qt.pop();
            }
        }
        return root;
    }
};