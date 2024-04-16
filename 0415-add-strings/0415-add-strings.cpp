class Solution {
public:
    string addStrings(string num1, string num2) {
    //   int maxi = max(num1.size(),num2.size());
    //   int mini = min(num1.size(),num2.size());
      int i=num1.size()-1,j=num2.size()-1;

      int c=0;
      string ans ="";
     while(i>=0 || j>=0 ){
        int n1 = (i>=0 ? num1[i] :'0') -'0';
        int n2 = (j>=0 ? num2[j] :'0') -'0';
        int sum = n1+n2+c;
        c = sum/10;
        int digit = sum%10;
        ans.push_back(digit +'0');
        i--;
        j--;
      }
      if(c!=0){
        ans.push_back(c+'0');
      }
      reverse(ans.begin(),ans.end());
      return ans;
    }
};