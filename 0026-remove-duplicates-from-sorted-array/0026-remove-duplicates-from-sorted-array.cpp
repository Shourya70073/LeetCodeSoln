class Solution {
public:
    void swap(int *p,int *q){
       int temp=*p;
       *p=*q;
       *q=temp;
   }
    int removeDuplicates(vector<int>& a) {
        int i=0;
        for(int j=i+1;j<a.size();j++){
            if(a[i]!=a[j]){
                i++;
                swap(&a[i],&a[j]);
            }
        }
        return i+1;
    }
};