class Solution {
public:
    int dm(vector<int>&nums){
         for(int i=0;i<nums.size()-1;i++){
        
        if(nums[i]>nums[i+1])
            return 0;
    } 
        return 1;
    }
    
    int am(vector<int>&nums){
         for(int i=0;i<nums.size()-1;i++){
        
        if(nums[i]<nums[i+1])
            return 0;
    }  
        return 1;
    }
    bool isMonotonic(vector<int>& nums) {
       return dm(nums) || am(nums);
    }
};