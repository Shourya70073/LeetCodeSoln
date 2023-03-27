class Solution {
public:
    
    int searchLeft(vector<int>nums , int target){
        int l=0;
        int h=nums.size()-1;
        int index=-1;
        while(l<=h){
         int  mid=(l+h)/2;
            if(nums[mid]==target){
                index=mid;
                h=mid-1;
            }
            else if(target>nums[mid]){
            l=mid+1;
            }
            else{
     h=mid-1;
            }
            }
        return index;
    }
    int searchright(vector<int>nums , int target){
        int l=0;
        int h=nums.size()-1;
        int index=-1;
        while(l<=h){
         int  mid=(l+h)/2;
            if(nums[mid]==target){
                index=mid;
                l=mid+1;
            }
            else if(target>nums[mid]){
            l=mid+1;
            }
            else{
     h=mid-1;
            }
            }
        return index;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> ans;
        int a= searchLeft(nums,target);
        int b=searchright(nums,target);
        ans.push_back(a);
        ans.push_back(b);
        return ans;
    }
};