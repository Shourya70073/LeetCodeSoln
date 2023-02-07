class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int n= fruits.size();
        
        unordered_map<int, int> mp;
        int i=0;
        int j=0;
        for(i=0;i<n;i++){
            mp[fruits[i]]++;
            
            if(mp.size() > 2){
                if(--mp[fruits[j]]==0)
                    mp.erase(fruits[j]);
                
                j++;
            }
        }
        
        return i-j;
    }
};