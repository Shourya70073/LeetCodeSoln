//{ Driver Code Starts
#include<bits/stdc++.h>

using namespace std;


// } Driver Code Ends

#include<cmath>
class Solution{

    // Function to find the trapped water between the blocks.
    public:
    long long trappingWater(int height[], int n){
        vector<int>left;
        vector<int>right;
        long long sum=0;
        for(int i=0;i<n;i++){
            left.push_back(0);
            right.push_back(0);
        }
        left[0]=height[0];
        right[n-1]=height[n-1];
        for(int i=1;i<n;i++){
               left[i]=max(left[i-1],height[i]);
        }
        for(int i=n-2;i>=0;i--){
            right[i]=max(right[i+1],height[i]);
        }

        for(int i=0;i<n;i++){
            long long d=(min(left[i],right[i])-height[i]);
            
            sum=sum+d;
        }
        return sum;
    }
};

//{ Driver Code Starts.

int main(){
    
    int t;
    //testcases
    cin >> t;
    
    while(t--){
        int n;
        
        //size of array
        cin >> n;
        
        int a[n];
        
        //adding elements to the array
        for(int i =0;i<n;i++){
            cin >> a[i];            
        }
        Solution obj;
        //calling trappingWater() function
        cout << obj.trappingWater(a, n) << endl;
        
    }
    
    return 0;
}
// } Driver Code Ends