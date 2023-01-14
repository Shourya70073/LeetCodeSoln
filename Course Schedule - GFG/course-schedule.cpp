//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution
{
  public:
    vector<int> findOrder(int V, int m, vector<vector<int>> pre) 
    {
                vector<int>adj[V];
        for(auto i:pre){
          adj[i[1]].push_back(i[0]);
        }
        vector<int> indeg(V,0);
        for(int i=0;i<V;i++){
           for(auto j:adj[i]){
               indeg[j]++;
           }
       }
       
       queue<int>qt;
       for(int i=0;i<V;i++){
           if(indeg[i]==0)
             qt.push(i);
       }
       vector<int>topo;
        vector<int>emp;
       while(!qt.empty()){
           int node=qt.front();
           topo.push_back(node);
           qt.pop();
           for(auto i:adj[node]){
               indeg[i]--;
               if(indeg[i]==0)
                 qt.push(i);
           }
       }
       if(topo.size()==V)
         return topo;
       return emp;
    }
};

//{ Driver Code Starts.

int check(int V, vector <int> &res, vector<int> adj[]) {
    vector<int> map(V, -1);
    for (int i = 0; i < V; i++) {
        map[res[i]] = i;
    }
    for (int i = 0; i < V; i++) {
        for (int v : adj[i]) {
            if (map[i] > map[v]) return 0;
        }
    }
    return 1;
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        int n, m;
        cin >> n >> m;
        int u, v;

        vector<vector<int>> prerequisites;

        for (int i = 0; i < m; i++) {
            cin >> u >> v;
            prerequisites.push_back({u,v});
        }
        
        vector<int> adj[n];
        for (auto pre : prerequisites)
            adj[pre[1]].push_back(pre[0]);
        
        Solution obj;
        vector <int> res = obj.findOrder(n, m, prerequisites);
        if(!res.size())
            cout<<"No Ordering Possible"<<endl;
        else
            cout << check(n, res, adj) << endl;
    }
    
    return 0;
}
// } Driver Code Ends