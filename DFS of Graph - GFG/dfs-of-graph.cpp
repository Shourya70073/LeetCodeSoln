//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    void dfs(vector<int>adj[],int start,int vis[],vector<int>&ans){
        vis[start]=1;
        ans.push_back(start);
        
        for(auto i:adj[start]){
            if(!vis[i])
            dfs(adj,i,vis,ans);
        }
    }
    vector<int> dfsOfGraph(int V, vector<int> adj[]) {
       int vis[V]={0};
       int start=0;
       vector<int>ans;
       dfs(adj,start,vis,ans);
       return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int V, E;
        cin >> V >> E;

        vector<int> adj[V];

        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        // string s1;
        // cin>>s1;
        Solution obj;
        vector<int> ans = obj.dfsOfGraph(V, adj);
        for (int i = 0; i < ans.size(); i++) {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends