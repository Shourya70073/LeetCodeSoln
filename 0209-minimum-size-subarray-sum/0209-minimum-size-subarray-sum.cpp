class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int i = 0;
        int j = 0;
        int sum = nums[0];
        int ans = INT_MAX;
        
        while (j < nums.size()) {
            if (sum >= target) {
                int subarrayLength = j - i + 1;
                ans = min(ans, subarrayLength);
                sum -= nums[i];
                i++;
            } else {
                j++;
                if (j < nums.size())
                    sum += nums[j];
            }
        }
        
        if (ans == INT_MAX) {
            return 0;
        } else {
            return ans;
        }
    }
};
