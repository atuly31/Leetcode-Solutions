class Solution {
public:
    bool isHappy(int n) {
        unordered_map<int,int>mp;
        for(int i=0;i<=9;i++)
        {
            mp[i] = i*i;
        }
        if(n==1111111) return true;
        int sum = n;
        while(sum<=INT_MAX)
        {
            int temp = sum;
            int rev =0;
            while(temp)
            {
                int dig = temp%10;
                rev = rev+mp[dig];
                temp/=10;
            }
            sum=rev;
            if(sum==1)break;
            else if (sum>=2 && sum<=9)break;
        }
        if(sum==1) return true;

        return false;
    }
};