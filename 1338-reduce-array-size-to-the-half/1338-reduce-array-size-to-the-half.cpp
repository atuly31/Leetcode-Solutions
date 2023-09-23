class Solution {
public:
    int minSetSize(vector<int>& arr) {
     unordered_map<int,int> mp;
        vector<int> fre;
         for(auto i:arr) mp[i]++;
    
    
     for(auto i:mp) fre.push_back(i.second);
     sort(fre.begin(),fre.end());
     int ans=0;
     int mid =arr.size()/2;
     int remove=0;
     int i =fre.size()-1;
     while(remove<mid){
        ans=ans+1;
        remove=remove+fre[i];
        i--;
    }
    return ans;
    }
};