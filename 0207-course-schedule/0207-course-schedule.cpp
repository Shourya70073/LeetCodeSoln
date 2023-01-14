class Solution {
public:
    bool canFinish(int V, vector<vector<int>>& pre) {
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
         return 1;
       return 0;
    }
};