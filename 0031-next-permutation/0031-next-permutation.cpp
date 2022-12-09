class Solution {
public:
    void swap(int *p,int *k){
        int temp=*k;
        *k=*p;
        *p=temp;
    }
    void nextPermutation(vector<int>& nums) {
        int index1=-1;
        int index2=0;
        for(int i=nums.size()-2;i>=0;i--){
            if(nums[i]<nums[i+1]){
                index1=i;
                break;
            }
        }
        if(index1==-1){
            int a=0;
            int b=nums.size()-1;
          while(a<=b){
            swap(&nums[a],&nums[b]);
            a++;
            b--;
        }
            return;
        }
        for(int i=nums.size()-1;i>=0;i--){
          
            if(nums[i]>nums[index1]){
                index2=i;
                break;
            }
        }
        swap(&nums[index1],&nums[index2]);
        int h=nums.size()-1;
        int l=index1+1;
        while(l<=h){
            swap(&nums[l],&nums[h]);
            l++;
            h--;
        }
    }
};