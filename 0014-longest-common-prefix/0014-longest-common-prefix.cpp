class Solution {
public:
    string commonprifix(string str1,string str2 ){
     int len = min(str1.length(), str2.length());
     string result = "";
 for (int i = 0; i < len; i++)
    {
        if (str1[i] != str2[i])
            break;
        result += str1[i];
    }
 
    return (result);
}
    string commonpre(vector<string> strs, int n ){
         string pre = strs[0];
    for(int i=0;i<n;i++){
        pre = commonprifix(pre,strs[i]);
        }
     return (pre);
    }
    string longestCommonPrefix(vector<string>& strs) {
     int n = strs.size();
      string ans = commonpre(strs , n);
      if(ans.length()>0){
          return ans;
      }
    return "";
    }
};