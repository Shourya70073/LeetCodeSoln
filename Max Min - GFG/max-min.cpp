//{ Driver Code Starts
/* Driver program to test above function */

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution
{
   public:
    int findmax(int a[],int n){
        if(n==1){
            return a[0];
        }
        int t=findmax(a+1,n-1);
        return max(a[0],t);
    }
    int findmin(int a[],int n){
        if(n==1){
            return a[0];
        }
        int t=findmin(a+1,n-1);
        return min(a[0],t);
    }
   
   
   
   
    int findSum(int A[], int N)
    {
    	int t=findmax(A,N);
    	int d=findmin(A,N);
    	return t+d;
    }

};

//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++)
	      cin>>arr[i];
	    Solution ob;  
	    int ans=ob.findSum(arr, n);
	    cout<<ans;
	    cout<<"\n";
	}
	return 0;
}

// } Driver Code Ends