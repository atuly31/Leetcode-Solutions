class Solution {
public:

bool check(string& s,int i,int j)
{
    while(i<j)
    {
         if(s[i]!=s[j]) return false;
         i++;
         j--;
    }
    return true;
};

    string longestPalindrome(string s) {
        int max_len =0;
        int max_start=0;
        int n =s.size();
        for(int i=0;i<n;i++)
        {
            for(int j=i;j<n;j++)
            {
                if(check(s,i,j))
                {
                    if(j-i+1 > max_len){
                         max_len=max(max_len,j-i+1);
                    max_start=i;
                    }
                  
                }
            }
        }
        return s.substr(max_start,max_len);
    }
};