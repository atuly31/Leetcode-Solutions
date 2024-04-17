class Solution {
public:
    vector<int> rev(int sum){
        vector<int> ans;
        while(sum!=0)
        {
           int digit = sum%10;
           ans.push_back(digit);
           sum/=10;
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
      
    vector<int> addToArrayForm(vector<int>& num, int k) {
        int n=num.size();
        string str1 ="";
        string str2 ="";
       for(int i=0;i<n;i++){
            
           char ch = num[i]+'0';
           str1 += ch;
       } 
      vector<int> arr = rev(k);
      for(int i=0;i<arr.size();i++){
            
           char ch1 = arr[i]+'0';
           str2 += ch1;
       } 
       vector<int> ans;
       int i = num.size()-1, j=arr.size()-1;
       int carr=0;
       while(i>=0 || j>=0){

        int n1 = (i>=0 ? str1[i]:'0')-'0';
        int n2 = (j>=0 ? str2[j]:'0')-'0';
        int sum = n1+n2+carr;
        ans.push_back(sum%10);
        carr = sum/10;
        i--;
        j--;
       }
       if(carr!=0) ans.push_back(carr);
       reverse(ans.begin(),ans.end());
       return ans;

      
    }
};