class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count=0;
        int el=-1;
        for(int i=0;i<nums.size();i++){
            if(count==0){
                el=nums[i];
                count++;
            }
            else if(nums[i]!=el){
                count--;
            }
            else {
                count++;
            }
        }
        int count1=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==el){
                count1++;
                if(count1>nums.size()/2){
                    return el;
                }
            }
        }
        return -1;
    }
};