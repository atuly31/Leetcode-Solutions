class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> ans;
     for(int i=0;i<n+1;i++){
         int sum =0;
         int num =i;
         while(num!=0){
             sum=sum+num%2;
             num=num/2;
         }
         ans.push_back(sum);
     } 
        return ans;
    }
};