//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int minimize(vector<int>& height, int n, int k,vector<int> &dp) {
       if(n==0){
           return 0;
       }
       if(dp[n]!=-1){
           return dp[n];
       }
       int fans=INT_MAX;
       
       for(int i=1;i<=k;i++){
         if(n-i>=0){
             int sans=minimize(height,n-i,k,dp)+abs(height[n]-height[n-i]);
         fans=min(fans,sans);
         }
       }
       dp[n]=fans;
       return dp[n];
    }
      int minimizeCost(vector<int>& height, int n, int k) {
          vector<int> dp(n,-1);
          return minimize(height,n-1,k,dp);
      }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, K;
        cin >> N >> K;
        vector<int> arr(N);
        for (int i = 0; i < N; i++) {
            cin >> arr[i];
        }
        Solution obj;
        cout << obj.minimizeCost(arr, N, K) << "\n";
    }
    return 0;
}
// } Driver Code Ends