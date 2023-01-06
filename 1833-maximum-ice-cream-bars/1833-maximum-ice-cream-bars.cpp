class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        sort(costs.begin(),costs.end());
        int count=0;
        for(auto i:costs){
            coins=coins-i;
            count++;
            if(coins==0)
                return count;
            if(coins<0)
                return count-1;
        }
        return count;
        
    }
};