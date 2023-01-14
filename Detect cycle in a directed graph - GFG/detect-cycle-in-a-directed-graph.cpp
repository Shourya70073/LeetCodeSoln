//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    // Function to detect cycle in a directed graph.
    bool isCyclic(int V, vector<int> adj[]) {
       int indeg[V]={0};
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
       return 0;
       return 1;
    }
};

//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {
        int V, E;
        cin >> V >> E;

        vector<int> adj[V];

        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
        }

        Solution obj;
        cout << obj.isCyclic(V, adj) << "\n";
    }

    return 0;
}

// } Driver Code Ends