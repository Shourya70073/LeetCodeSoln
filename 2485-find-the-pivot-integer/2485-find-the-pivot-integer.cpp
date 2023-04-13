class Solution {
public:
    int pivotInteger(int n) {
        int pivot;
        
        if(n==1){
        return 1;
        }
        vector<int>arr(n);
        int d=1;
        for(int i=0;i<n;i++){
              arr[i]=d;
            d++;
        }
        vector<int>pre(n+1);
        
        for(int i=1;i<=n;i++){
          pre[i]=pre[i-1]+arr[i-1];
        }
        for(int i=1;i<=n;i++){
            if(pre[i]==pre[n]-pre[i-1]){
         return i;
            }
        }
        return -1;
        
    }
};