class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int i=0;
        for(int j=0;j<nums.size();j++){
            if(nums[j]!=val){
              int t=nums[i];
                nums[i]=nums[j];
                nums[j]=t;
                i++;
            }
        }
        return i;
    }
};