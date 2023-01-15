class Solution {
public:
    int thirdMax(vector<int>& nums) {
         set<int, greater<int>> s;
    set<int>::iterator it;
    int i, size = nums.size();
    for (i = 0; i < size; ++i) {
        s.insert(nums[i]);
    }
    if (s.size() < 3) {
        return *s.begin();
    } 
    it = s.begin();
    ++it;
    ++it;
    return *it;
    }
};