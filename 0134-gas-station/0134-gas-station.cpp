class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
         int sum = 0;
        for(int i = 0; i < gas.size(); i++){
            sum += (gas[i]-cost[i]);
        }
        if(sum<0)return -1;
        sum = 0;
        int ans = -1;
        for(int i = 0; i < gas.size(); i++){
            sum += gas[i]-cost[i];
            if(sum<0){
                sum = 0;
                ans = -1;
            }else if(ans==-1){
                ans = i;
            }
        }
        return ans;
    }
};