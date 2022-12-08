//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:
void swap(int &x,int &y){
        int temp=x;
        x=y;
        y=x;
    }
	void pushZerosToEnd(int a[], int n) {
	    int i=0;
	    for(int j=0;j<n;j++){
	        if(a[j]!=0){
	            a[i]=a[j];
	            i++;
	        }
	    }
	    while(i<n){
	        a[i]=0;
	        i++;
	    }
	}
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        ob.pushZerosToEnd(arr, n);
        for (i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends