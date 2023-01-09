//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution 
{
    public:
    //Function to find minimum time required to rot all oranges. 
    int orangesRotting(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        vector<vector<int>>vis(n,vector<int>(m,0));
        int cnt=0;
        queue<pair <pair<int,int>,int>>qt;
        int drow[] = {-1, 0, 1, 0};
        int dcol[] = {0, 1, 0, -1};
        int tm=0;
        int rt=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==2){
                    vis[i][j]=2;
                    qt.push({{i,j},0});
                }
                else if(grid[i][j]==1){
                    cnt++;
                    vis[i][j]=0;
                }
                else{
                    vis[i][j]=0;
                }
            }
        }
        
        while(!qt.empty()){
            int r=qt.front().first.first;
            int c=qt.front().first.second;
            int t=qt.front().second;
            qt.pop();
            tm=max(tm,t);
            
            for(int i=0;i<4;i++){
              int  nr=r+drow[i];
                int nc=c+dcol[i];
                
                if(nr>=0 && nr<n && nc>=0 && nc<m && vis[nr][nc]!=2 && grid[nr][nc]==1){
                    vis[nr][nc]=2;
                    rt++;
                    qt.push({{nr,nc},t+1});
                }
            }
        }
        if(rt!=cnt)
            return -1;
        
        return tm;
    }
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		vector<vector<int>>grid(n, vector<int>(m, -1));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				cin >> grid[i][j];
			}
		}
		Solution obj;
		int ans = obj.orangesRotting(grid);
		cout << ans << "\n";
	}
	return 0;
}
// } Driver Code Ends