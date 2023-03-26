class Solution {
public:
    int recurrBinary(vector<int>& nums,int l,int h, int target){
        if(l>h ){
         return -1;
        }
        
       int mid=(l+h)/2;
       if(nums[mid]==target){
           return mid;
       }
       else if(target>nums[mid]){
           return recurrBinary(nums,mid+1,h,target);
       }
       else{
            return recurrBinary(nums,l,mid-1,target);
       }
    }
    int search(vector<int>& nums, int target) {
        int l=0;
        int h=nums.size()-1;
        return recurrBinary(nums,l,h,target);
    }
};