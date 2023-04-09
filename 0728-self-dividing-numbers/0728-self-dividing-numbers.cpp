class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int>ans;
        for(int i=left; i<=right;i++){
           int number=i;
            int p=i;
           int flag=1;
            int rem=0;
            while(number>0){
                if(number >=1 && number<=9)
                   rem=number;
                else
                    rem=number%10;
                if(rem==0 || p%rem!=0)
                    flag=0;
                number=number/10;
            }
            if(flag==1){
                ans.push_back(p);
            }
        }
        return ans;
    }
};