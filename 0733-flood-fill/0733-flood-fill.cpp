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
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int inc=image[sr][sc];
        vector<vector<int>>ans=image;
        int row[]={0,1,-1,0};
        int col[]={-1,0,0,+1};
        dfs(image,sr,sc,inc,color,ans,row,col);
        return ans;
    }
};