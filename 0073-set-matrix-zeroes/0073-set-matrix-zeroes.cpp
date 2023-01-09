class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
      vector<pair<int,int>>vt;
        int n=matrix.size();
        int m=matrix[0].size();
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(matrix[i][j]==0)
                    vt.push_back({i,j});
            }
        }
        for(auto i:vt){
            int row=i.first;
            for(int k=0;k<m;k++){
                matrix[row][k]=0;
            }
            int col=i.second;
            for(int p=0;p<n;p++){
                matrix[p][col]=0;
            }
        }
    }
};