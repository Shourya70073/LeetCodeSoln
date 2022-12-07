//{ Driver Code Starts
#include <iostream>
using namespace std;
#include <stdio.h>
 
int findEquilibrium(int [], int );
 
int main() {
	int T;
	cin>>T;
	while(T--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++)
		cin>>a[i];
		cout<<findEquilibrium (a,n)<<endl;
	}
	// your code goes here
	return 0;
}
// } Driver Code Ends


/* You are required to complete this method*/
int findEquilibrium(int nums[], int n)
{
  int rsum=0;
        for(int i=1;i<n;i++){
            rsum=rsum+nums[i];
        }
        int lsum=0;
        for(int i=0;i<n;i++){
            if(lsum==rsum){
                return i;
            }
            lsum=lsum+nums[i];
            if(i<n-1)
               rsum=rsum-nums[i+1];
            if(i==n-1)
              rsum=0;
        }
        return -1;
}