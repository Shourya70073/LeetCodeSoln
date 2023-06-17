//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution{
public:

   void swap(int *p,int *q){
       int temp=*p;
       *p=*q;
       *q=temp;
   }
    int remove_duplicate(int a[],int n){
        int i=0;
        for(int j=i+1;j<n;j++){
            if(a[i]!=a[j]){
                i++;
                swap(&a[i],&a[j]);
            }
        }
        return i+1;
    }
};

//{ Driver Code Starts.
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int N;
        cin>>N;
        int a[N];
        for(int i=0;i<N;i++)
        {
            cin>>a[i];
        }
    Solution ob;
    int n = ob.remove_duplicate(a,N);

    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
    cout<<endl;
    }
}
// } Driver Code Ends