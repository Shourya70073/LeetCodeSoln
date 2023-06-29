class Solution {
public:
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
};