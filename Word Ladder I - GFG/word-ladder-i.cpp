//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
public:
    int wordLadderLength(string beginWord, string endWord, vector<string>& wordList) {
        set<string>st(wordList.begin(),wordList.end());
       queue<pair<string,int>>qt;
        qt.push({beginWord,0});
        st.erase(beginWord);
        
        while(!qt.empty()){
            string word=qt.front().first;
            int step=qt.front().second;
            if(word==endWord)
                            return step+1;
            qt.pop();
            for(int i=0;i<word.size();i++){
                char alpha=word[i];
                for(char ch='a';ch<='z';ch++){
                    word[i]=ch;
                    
                    if(st.find(word)!=st.end()){
                        
                        st.erase(word);
                        qt.push({word,step+1});
                    }
                    
                }
                word[i]=alpha;
            }
        }
        
        return 0; 
    }
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		vector<string>wordList(n);
		for(int i = 0; i < n; i++)cin >> wordList[i];
		string startWord, targetWord;
		cin >> startWord >> targetWord;
		Solution obj;
		int ans = obj.wordLadderLength(startWord, targetWord, wordList);
		cout << ans << "\n";
	}
	return 0;
}
// } Driver Code Ends