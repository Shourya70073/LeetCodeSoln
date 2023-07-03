//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
  
  int frog(int n, vector<int> &heights,vector<int>&dp)
{
     if (n == 0) {
        return 0;
    }
   
    if(dp[n]!=-1){
        return dp[n];
    }
    int ans1 = frog( n - 1,heights,dp) + abs(heights[n] - heights[n - 1]);
    int ans2=INT_MAX;
    if(n>1)
        ans2 = frog(n-2,heights,dp) + abs(heights[n] - heights[n - 2]);

    dp[n]= min(ans1, ans2);
    return dp[n];
}
int minimumEnergy(vector<int>& height, int n) {
   vector<int> dp(n,-1);
   
   return frog(n-1,height,dp);
}

};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        vector<int> arr(N);
        for (int i = 0; i < N; i++) {
            cin >> arr[i];
        }
        Solution obj;
        cout << obj.minimumEnergy(arr, N) << "\n";
    }
    return 0;
}
// } Driver Code Ends