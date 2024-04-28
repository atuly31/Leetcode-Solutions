class Solution {
public:
    string minWindow(string s, string t) {
        int n=s.size(),m=t.size();

        unordered_map<char,int> freqT;
        for(int i=0;i<t.size();++i){
            freqT[t[i]]++;
        }
        int count=m;

        unordered_map<char,int> freqCurr;
        
        pair<int,int> ans(0,10e5);
        int j=0;
        for(int i=0;i<s.size();++i)
            freqCurr[s[i]]++;
            if(freqCurr[s[i]]<=freqT[s[i]]) --count;

            if(count==0){
                while(j<=i){
                    if(freqT[s[j]]<freqCurr[s[j]]){
                        freqCurr[s[j]]--;
                    }
                    else{
                        break;
                    }
                    ++j;
                }
                if(i-j < ans.second-ans.first){
                    ans.first=j;
                    ans.second=i;
                }
                freqCurr[s[j]]--;
                count++;
                ++j;
            }

        }
        if(ans.second==10e5) return "";
        return s.substr(ans.first,ans.second-ans.first+1);

    }
};