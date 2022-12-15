//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution {
  public:
  unordered_map<char,int>mp;
  Solution(){
        mp['I']=1;
        mp['V']=5;
        mp['X']=10;
        mp['L']=50;
        mp['C']=100;
        mp['D']=500;
        mp['M']=1000;
    }
    
    int romanToDecimal(string &s) {
        int result=mp[s[s.length()-1]];
        
        for(int i=s.length()-2;i>=0;i--){
            if(mp[s[i]]<mp[s[i+1]]){
                result=result-mp[s[i]];
            }
            else{
                result=result+mp[s[i]];
            }
        }
        return result;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        Solution ob;
        cout << ob.romanToDecimal(s) << endl;
    }
}
// } Driver Code Ends