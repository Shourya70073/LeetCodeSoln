//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
     int lenOfLongSubarr(int a[], int n, int k) {
        unordered_map<int, int> mp;
        int len = 0;
        int pf = 0;
        mp[pf] = -1; 
        for (int i = 0; i < n; i++) {
            pf += a[i];
            if (mp.find(pf - k) != mp.end()) {
                int j = mp[pf - k];
                len = max(len, i - j);
            }
            if (mp.find(pf) == mp.end())
                mp[pf] = i;
        }
        return len;
    }
};

//{ Driver Code Starts.

int main() {
	//code
	
	int t;cin>>t;
	while(t--)
	{
	    int n, k;
	    cin>> n >> k;
	    int a[n];
	    
	    for(int i=0;i<n;i++)
	        cin>>a[i];
	   Solution ob;
	   cout << ob.lenOfLongSubarr(a, n , k)<< endl;
	    
	}
	
	return 0;
}
// } Driver Code Ends