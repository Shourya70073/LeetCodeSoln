class Solution {
public:
    int missingNumber(vector<int>& A) {
       int N=A.size();
        int s1=0;
    for(int i=1;i<=N;i++){
        s1=s1+i;
    }
    int s2=0;
    for(int i=0;i<N;i++){
      s2=s2+A[i];  
    }
   
   int c=s1-s2;
   return c;
    }
};