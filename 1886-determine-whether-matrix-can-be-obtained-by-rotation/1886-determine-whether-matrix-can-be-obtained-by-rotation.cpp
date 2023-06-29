class Solution {
public:
    bool same(vector<vector<int>>&mat,vector<vector<int>>target){
        for(int i=0;i<mat.size();i++){
            for(int j=0;j<mat.size();j++){
                if(mat[i][j]!=target[i][j]){
                    return false;
                }
            }
        }
        return true;
    }
       void rev(vector<int>&mat){
        int i=0;
        int j=mat.size()-1;
        while(i<j){
            int temp=mat[i];
            mat[i]=mat[j];
            mat[j]=temp;
            i++;
            j--;
        }
    }
    void rotate(vector<vector<int>>& matrix) {
        
        
        
        for(int i=0;i<matrix.size();i++){
            for(int j=i+1;j<matrix[i].size();j++){
                swap(matrix[i][j],matrix[j][i]);
            }
        }
        for(int i=0;i<matrix.size();i++){
            rev(matrix[i]);
        }
    }
    
    bool findRotation(vector<vector<int>>& mat, vector<vector<int>>& target) {
        for(int i=1;i<=4;i++){
            rotate(mat);
            if(same(mat,target)){
                return 1;
            }
        }
        return 0;
    }
};