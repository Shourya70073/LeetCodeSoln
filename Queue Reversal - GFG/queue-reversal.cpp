//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;
queue<int> rev(queue<int> q);
int main()
{
    int test;
    cin>>test; 
    while(test--)
    {
    queue<int> q; 
    int n, var; 
    cin>>n; 
    while(n--)
    {
        cin>>var; 
        q.push(var);
    }
    queue<int> a=rev(q); 
    while(!a.empty())
    {
        cout<<a.front()<<" ";
        a.pop();
    }
    cout<<endl; 
    }
}
// } Driver Code Ends


//function Template for C++



queue<int> rev(queue<int> q)
{
    queue<int>k;
    stack<int>p;
    while(!q.empty()){
        int t=q.front();
        p.push(t);
        q.pop();
    }
    while(!p.empty()){
        int t=p.top();
        k.push(t);
        p.pop();
    }
    return k;
}