//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	int largest(int arr[],int n){
	    int large=arr[0];
	    for(int i=0;i<n;i++){
	       if(arr[i]>large){
	           large=arr[i];
	       }
	    }
	    return large;
	}
	int print2largest(int arr[], int n) {
	    int large=largest(arr,n);
	   int large2=-1;
	   for(int i=0;i<n;i++){
	      if(arr[i]>large2){
	          if(arr[i]!=large){
	              large2=arr[i];
	          }
	      }
	   }
	   return large2;
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.print2largest(arr, n);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends