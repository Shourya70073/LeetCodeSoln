class Solution {
public:
      void dfs(vector<int>adj[],int start,int vis[]){
        vis[start]=1;
       
        
        for(auto i:adj[start]){
            if(!vis[i])
            dfs(adj,i,vis);
        }
    }
    int findCircleNum(vector<vector<int>>& c) {
        int v=c[0].size();
        vector<int> adj[v+1];
        int vis[v+1];
        int count=0;
        for(int i=0;i<=v;i++)
           vis[i]=0;
        
        
        for(int i=0;i<c.size();i++){
            for(int j=0;j<c[i].size();j++){
                if(c[i][j]==1 && i!=j){
                    adj[i].push_back(j);
                }
            }
        }
        
        
        for(int i=0;i<v;i++){
            if(vis[i]==0){
                count++;
                dfs(adj,i,vis);
            }
        }
        return count;
    }
};