//{ Driver Code Starts
//Initial Template for C++
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
public:
   vector<string> print(int num){
       if(num==1){
           vector<string>inp;
           inp.push_back("0");
           inp.push_back("1");
           return inp;
       }
       vector<string>ans=print(num-1);
       vector<string>fans;
       for(int i=0;i<ans.size();i++){
           string s1=ans[i];
           if(s1[s1.length()-1]=='1'){
               s1=s1+'0';
               fans.push_back(s1);
           }
           else{
               fans.push_back(s1+'0');
               fans.push_back(s1+'1');
           }
       }
       return fans;
       
   }
    void generateBinaryStrings(int& num){
       string ans="";
       vector<string>t=print(num);
       for(auto i:t){
           ans=ans+i+" ";
       }
       cout<<ans;
    }
};

//{ Driver Code Starts.
int main(){
    int t = 1;
    cin >> t;

    // freopen ("output_gfg.txt", "w", stdout);

    while(t--){
        //Input
        int n; cin >> n;

        Solution obj;
        // cout << setprecision(9) << obj.switchCase(choice,vec) << endl;
        obj.generateBinaryStrings(n);
        cout << endl;
        
        // cout << "~\n";
    }
    // fclose(stdout);

    return 0;
}

// } Driver Code Ends