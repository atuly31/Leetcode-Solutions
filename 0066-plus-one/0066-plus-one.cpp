class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
    string str ="";
    string str1 ="1";
    for(int i=0;i<digits.size();i++) 
    {
       char ch = digits[i] +'0';
       str = str +ch;
    }
    vector<int> ans;
    int carry =0;
   
    int i = digits.size()-1,j=0;
    while(i>=0 || j>=0)
    { 
       
       int n1 = (i>=0 ? str[i]:'0')-'0';
       int n2 = (j>=0 ? str1[j]:'0')-'0';
       int sum = n1+n2+carry;
       ans.push_back(sum%10);
       carry = sum/10;
       i--;
       j--;
    }
    if (carry!=0)  ans.push_back(carry);
    reverse(ans.begin(),ans.end());

    return ans;
    }
};