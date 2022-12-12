class Solution {
public:
    int climbStairs(int n){
      int a[n];
      a[0]=1;
      if(n==1)
          return a[0];
        
      a[1]=2;
        if(n==2)
            return a[1];
      for(int i=2;i<n;i++){
        a[i]=a[i-1]+a[i-2];
      }
        return a[n-1];
    }
};
  