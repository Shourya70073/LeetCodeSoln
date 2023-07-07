//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function to find the next greater element for each element of the array.
    vector<long long> nextLargerElement(vector<long long> arr, int n){
        vector<long long>vt;
        stack<long long>st;
        
        for(int i=n-1;i>=0;i--){
            while( !st.empty() && st.top()<=arr[i])
              st.pop();
              
            if(st.empty()){
                vt.push_back(-1);
            }
            else{
                vt.push_back(st.top());
            }
            
            st.push(arr[i]);
            
        }
        reverse(vt.begin(),vt.end());
        return vt;
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
        vector<long long> arr(n);
        for(int i=0;i<n;i++)
            cin>>arr[i];
        
        Solution obj;
        vector <long long> res = obj.nextLargerElement(arr, n);
        for (long long i : res) cout << i << " ";
        cout<<endl;
    }
	return 0;
}
// } Driver Code Ends