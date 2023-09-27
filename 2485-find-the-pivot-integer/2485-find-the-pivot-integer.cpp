class Solution {
public:
    int pivotInteger(int n) {
    int sum =0,ls=0,rs;
    if(n==1) return 1;
     for(int i=1;i<=n;i++){
      sum=sum+i;   
     }  
    for(int i=1;i<=n;i++){
         if(ls==rs) return i-1;
         else{
             ls=ls+i;
             rs=(sum-ls)+i;
         }
     }
        return -1;
    }
};