class Solution {
public:
   void combo(string digits,vector<string>&ans,map<int,string>mp,int i,string temp)
   {
    if(i>=digits.length())
    {
       ans.push_back(temp);
       return;
    }
    int idx = digits[i]-'0';
    string val = mp[idx];
    for(int j=0;j<val.size();j++)
    {
        temp.push_back(val[j]);
        combo(digits,ans,mp,i+1,temp);
        temp.pop_back();
    }
   }
    vector<string> letterCombinations(string digits) 
    {
        
        map<int,string>mp;
        mp.insert({0,""});
        mp.insert({1,""});
        mp.insert({2,"abc"});
        mp.insert({3,"def"});
        mp.insert({4,"ghi"});
        mp.insert({5,"jkl"});
        mp.insert({6,"mno"});
        mp.insert({7,"pqrs"});
        mp.insert({8,"tuv"});
        mp.insert({9,"wxyz"});
        vector<string> ans;
        string temp="";
        if(digits.size()==0) return ans;
        combo(digits,ans,mp,0,temp);
        return ans;
    }
};