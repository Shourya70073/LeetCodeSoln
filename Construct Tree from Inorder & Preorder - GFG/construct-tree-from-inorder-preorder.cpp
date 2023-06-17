//{ Driver Code Starts
//

#include<bits/stdc++.h>
using namespace std;

struct Node
{
	int data;
	struct Node *left;
	struct Node *right;
	
	Node(int x){
	    data = x;
	    left = NULL;
	    right = NULL;
	}
};


void printPostOrder(Node *root)
{
	if(root==NULL)
		return;
	printPostOrder(root->left);
	printPostOrder(root->right);
	cout<<root->data<<" ";
}

// } Driver Code Ends

/*Complete the code here.
Node is as follows:
struct Node
{
  int data;
  Node* left;
  Node* right;
};
*/

class Solution{
    public:
    Node* buildTree(int in[],int pre[], int n)
    {
        if(n == 0){
            return NULL;
        }
        
        int index;
        Node* root = new Node(pre[0]);
        for(int i=0; i<n; i++){
            if(in[i] == pre[0]){
                index = i;
                break;
            }
        }
        
        int leftIn[index], rightIn[n-index-1], leftPre[index], rightPre[n-index-1];
        for(int i=0; i<n; i++){
            if(i < index){
                leftIn[i] = in[i];
            }
            if(i > index){
                rightIn[i-index-1] = in[i];
            }
            if(i>0){
                if(i <= index)
                    leftPre[i-1] = pre[i];
                else{
                    rightPre[i-index-1] = pre[i];
                }        
            }
        }
        
        root -> left = buildTree(leftIn, leftPre, index);
        root -> right = buildTree(rightIn, rightPre, n - index -1);
        
        return root;
    }
};

//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		
		int inorder[n], preorder[n];
		for(int i=0; i<n; i++)
			cin>> inorder[i];
		for(int i=0; i<n; i++)
			cin>> preorder[i];
		Solution obj;
		Node *root = obj.buildTree(inorder, preorder, n);
		printPostOrder(root);
		cout<< endl;
	}
}

// } Driver Code Ends