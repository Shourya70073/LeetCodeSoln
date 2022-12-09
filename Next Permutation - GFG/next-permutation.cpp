//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    void swap(int *p,int *k){
        int temp=*k;
        *k=*p;
        *p=temp;
    }
    vector<int> nextPermutation(int N, vector<int> nums){
         int index1=-1;
        int index2=0;
        for(int i=nums.size()-2;i>=0;i--){
            if(nums[i]<nums[i+1]){
                index1=i;
                break;
            }
        }
        if(index1==-1){
           
            int a=0;
            int b=nums.size()-1;
          while(a<=b){
            swap(&nums[a],&nums[b]);
            a++;
            b--;
        }
        return nums;

        }
        for(int i=nums.size()-1;i>=0;i--){
          
            if(nums[i]>nums[index1]){
                index2=i;
                break;
            }
        }
        swap(&nums[index1],&nums[index2]);
        int h=nums.size()-1;
        int l=index1+1;
        while(l<=h){
            swap(&nums[l],&nums[h]);
            l++;
            h--;
        }
        return nums;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        vector<int> arr(N);
        for(int i = 0;i < N;i++)
            cin>>arr[i];
        
        Solution ob;
        vector<int> ans = ob.nextPermutation(N, arr);
        for(int u: ans)
            cout<<u<<" ";
        cout<<"\n";
    }
    return 0;
}
// } Driver Code Ends