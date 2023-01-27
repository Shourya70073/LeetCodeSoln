
    class Solution {
public:
    int solve(int src,int dst,int k,int n,vector<vector<int>> adj[])
    {
        queue<vector<int>> q;                       // make queue of vector for storing {node,dist,stop}
        q.push({src,0,0});                          // {node,dist,stop}
        vector<int> dis(n,INT_MAX);                 // for keep traking of minimum dist for every node
        dis[src]=0;                                 // src to src will be 0
        
        // BFS
        while(!q.empty())
        {
            int node = q.front()[0];
            int cost = q.front()[1];
            int stop = q.front()[2];
            q.pop();
            
            if(stop>k) continue;                     // if stop is bigger than k then just continue no need to find cost
            
            // check adjacency nodes
            for(auto &it : adj[node])
            {
                int nexNode = it[0];                 // nextNode
                int nexWeight = it[1];               // nextNode Weight
                
                // if i am having better option then took that and push it into queue with stop+1, as i used node as a stop
                if(cost +  nexWeight < dis[nexNode])
                {
                    dis[nexNode] = cost + nexWeight;                     // taking min cost for nexNode
                    q.push({nexNode, dis[nexNode],stop+1});
                }
            }
        }
        
        if(dis[dst]==INT_MAX) return -1;                // if I didn't reached to my dst then return -1
        else return dis[dst];                           // return min cost for dst node from  dis
    }
    
    int findCheapestPrice(int n, vector<vector<int>>& flights, int src, int dst, int k) 
    {
        // Directed Graph
        vector<vector<int>> adj[n];
        for(auto &it : flights)
        {
            adj[it[0]].push_back({it[1],it[2]});
        }
        
        // Function calling for BFS
        int ans = solve(src,dst,k,n,adj);
        return ans;
    }
};    

