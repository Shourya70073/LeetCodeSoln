class Solution {
private:
    bool isSameColored(int node,int color,vector<int> &vis,vector<vector<int>> &graph){
        vis[node]=color;
        //neighbours
        for(auto  it:graph[node]){
            if(vis[it]==0){
                if(isSameColored(it,-color,vis,graph)==true)
                    return true;
            }
            else if(vis[it]==color)
                return true;
        }
        return false;
    }
public:
    bool isBipartite(vector<vector<int>>& graph) {
        //graph is the adj list
        int n=graph.size();
        vector<int> vis(n,0);
        //multisource as per point 4 in the graph properties
        for(int i=0;i<n;i++){
            if(vis[i]==0){
                if(isSameColored(i,1,vis,graph)==true)
                    return false;
            }  
        }
        return  true;
        
        
    }
};