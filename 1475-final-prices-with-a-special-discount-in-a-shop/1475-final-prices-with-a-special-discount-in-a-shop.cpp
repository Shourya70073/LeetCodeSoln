class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        vector<int>ans;
        for(int i=0;i<prices.size();i++){
            int flag=0;
             for(int j=i+1;j<prices.size();j++){
                 if(prices[j]<=prices[i]){
                     flag=1;
                     int discount=prices[j];
                     ans.push_back(prices[i]-discount);
                     break;
                 }
             }
            if(flag==0){
                ans.push_back(prices[i]);
            }
            
        }
        return ans;
    
    }
};