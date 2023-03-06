class Solution {
public:
    bool ls(int n,vector<int>&ar){
         for(int i=0;i<ar.size();i++){
          if(ar[i]==n)
              return true;
         }
        return false;
             
    }
    int findKthPositive(vector<int>& arr, int k) {
        vector<int>t;
        int p=0;
        for(int i=1;i<=INT_MAX;i++){
              if(!ls(i,arr)){
                t.push_back(i);
                  p++;
              }
            if(p==k)
                return t[p-1];
        }
       return -1;
    }
};