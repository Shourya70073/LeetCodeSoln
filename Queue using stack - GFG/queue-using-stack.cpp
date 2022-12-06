//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Queue {
    stack<int> input, output;
public:
    
    void ppop(stack<int>&input,stack<int>&output){
        if(input.size()==1){
            int t=input.top();
            output.push(t);
            input.pop();
            return;
        }
        int k=input.top();
        input.pop();
        ppop(input,output);
        input.push(k);
        
    }
    
    void enqueue(int x) {
        input.push(x);
    }

    int dequeue() {
        ppop(input,output);
        int t =output.top();
        output.pop();
        return t;
    }
};

//{ Driver Code Starts.
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        Queue ob;

        int Q;
        cin>>Q;
        while(Q--){
        int QueryType=0;
        cin>>QueryType;
        if(QueryType==1)
        {
            int a;
            cin>>a;
            ob.enqueue(a);
        }
        else if(QueryType==2)
        {
            cout<<ob.dequeue()<<" ";

        }
        }
    cout<<endl;
    }
}

// } Driver Code Ends