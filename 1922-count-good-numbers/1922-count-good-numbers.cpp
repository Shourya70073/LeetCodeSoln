class Solution {
public:
    long long power(int n,long long r)
    {
      if(r==0){
          return 1;
      }
      
      long long ans=power(n,r/2)%1000000007;
      long long temp=1;
      if(r%2!=0){
        return ((((ans*ans)%1000000007)*n)%1000000007);
      }
    else{
        return ((ans*ans)%1000000007);
    }
    }
    int countGoodNumbers(long long n) {
        long long ans=power(20,n/2);
        
        if(n%2==0){
          return ans;
        }
        else{
           return (ans*5)%1000000007;
        }
    }
};