class Solution {
public:
    string addBinary(string a, string b) {
        int i =a.size()-1,j=b.size()-1;
       
        string ans ="";
        int carr =0,sum=0;
        while(i>=0 || j>=0)
        {
           int n1 = (i>=0 ? a[i]:'0')-'0';
           int n2 = (j>=0 ? b[j]:'0') -'0';
           if(n1 && n2 && carr ==1){
            sum = 11;
           }

           else if((n1 == 1 && n2 ==1) || (n1==1 && carr==1) || (n2==1 && carr==1)){
            sum = 10;
           }
           
           else
           {
            sum = n1+n2+carr;
           }
           ans.push_back(sum%10 +'0');
           carr = sum/10;
           i--;
           j--;
        }

        if(carr==1) ans.push_back(1+'0');
        reverse(ans.begin(),ans.end());
       return ans;
    }
};