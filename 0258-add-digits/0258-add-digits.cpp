class Solution {
public:
    int addDigits(int num) {
        int sum=num;
        while(sum>9){
            int n=sum;
            sum=0;
            while(n){
               int rem=n%10;
                sum=sum+rem;
                n=n/10;
            }
            
        }
        return sum;
    }
};