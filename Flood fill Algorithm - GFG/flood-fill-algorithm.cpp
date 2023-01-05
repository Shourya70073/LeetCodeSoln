//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
public:
        
       void dfs(vector<vector<int>>& image, int sr, int sc, int inc, int color,vector<vector<int>>&ans,int row[],int col[]){
        ans[sr][sc]=color;
        for(int i=0;i<4;i++){
            int rowi=sr+row[i];
            int coli=sc+col[i];
            
            if(rowi>=0 && rowi<image.size() && coli>=0 && coli <image[0].size() && image[rowi][coli]==inc && ans[rowi][coli]!=color){
                dfs(image,rowi,coli,inc,color,ans,row,col);
            }
        }
       }
        
    
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
         int inc=image[sr][sc];
        vector<vector<int>>ans=image;
        int row[]={0,1,-1,0};
        int col[]={-1,0,0,+1};
        dfs(image,sr,sc,inc,newColor,ans,row,col);
        return ans;
    }
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		vector<vector<int>>image(n, vector<int>(m,0));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++)
				cin >> image[i][j];
		}
		int sr, sc, newColor;
		cin >> sr >> sc >> newColor;
		Solution obj;
		vector<vector<int>> ans = obj.floodFill(image, sr, sc, newColor);
		for(auto i: ans){
			for(auto j: i)
				cout << j << " ";
			cout << "\n";
		}
	}
	return 0;
}
// } Driver Code Ends