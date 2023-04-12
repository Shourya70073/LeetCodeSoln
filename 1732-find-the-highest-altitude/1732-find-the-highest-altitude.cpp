class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int n=gain.size();
        vector<int>prefixSumArray(n+1);
        int maxi=INT_MIN;
        prefixSumArray[0]=0;
        for(int i=1;i<=n;i++){
            prefixSumArray[i]=prefixSumArray[i-1]+gain[i-1];
        }
        
        for(int i=0;i<=n;i++){
          if(prefixSumArray[i]>=maxi){
              maxi=prefixSumArray[i];
          }
        }
        return maxi;
    }
};