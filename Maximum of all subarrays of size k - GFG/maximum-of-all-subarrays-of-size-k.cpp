//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution
{
  public:
      int findmax(queue<int>t){
        int ans=INT_MIN;
        while(!t.empty()){
           int f=t.front();
           if(f>ans){
               ans=f;
           }
           t.pop();
        }
        return ans;
    }
    
    vector <int> max_of_subarrays(int *nums, int n, int k)
    {
    vector<int>ans;
        queue<int>qt;
        int maxi=INT_MIN;
           if(k==1){
            for(int i=0;i<n;i++){
                ans.push_back(nums[i]);
            }
            return ans;
        }
       
        else if(k==n){
            int temp=INT_MIN;
           for(int i=0;i<n;i++){
              if(nums[i]>temp){
                  temp=nums[i];
              }
           }
           ans.push_back(temp);
           return ans;
        }
else{
  for(int i=0;i<k;i++){
         if(nums[i]>maxi){
             maxi=nums[i];
         }
         qt.push(nums[i]);
         
       }
       ans.push_back(maxi);

       for(int i=k;i<n;i++){
           int t=qt.front();
           qt.pop();
           if(t==maxi){
                  if(nums[i]>=t){
                      maxi=nums[i];
                      ans.push_back(maxi);
                      qt.push(nums[i]);
                  }
                  else{
                      qt.push(nums[i]);
                      int d=findmax(qt);
                      maxi=d;
                      ans.push_back(d);
                  }

           }
           else{
               if(nums[i]>maxi){
                   maxi=nums[i];
               }
               ans.push_back(maxi);
               qt.push(nums[i]);
           }
       }


        return ans;  
}
       
    }
};

//{ Driver Code Starts.

int main() {
	
	int t;
	cin >> t;
	
	while(t--){
	    
	    int n, k;
	    cin >> n >> k;
	    
	    int arr[n];
	    for(int i = 0;i<n;i++) 
	        cin >> arr[i];
	    Solution ob;
	    vector <int> res = ob.max_of_subarrays(arr, n, k);
	    for (int i = 0; i < res.size (); i++) 
	        cout << res[i] << " ";
	    cout << endl;
	    
	}
	
	return 0;
}
// } Driver Code Ends