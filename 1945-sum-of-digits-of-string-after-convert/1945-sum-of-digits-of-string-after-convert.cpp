class Solution {
public:
    int getLucky(string s, int k) {
        int sum =0;
        string str_sum="";
        for(int i=0;i<s.size();i++)
        {
            int a = s[i]-96;
           
            str_sum += to_string(a);
        }
        int n = str_sum.size();
        for(auto i:str_sum)
        {
            int a = i-'0';
            sum +=a;
        }
        k=k-1;
        // cout<<sum;
        int temp = sum;
        
        while(k--)
        {
           int rev =0;
           while(temp)
           {
            int digit = temp%10;
            rev = rev+digit;
            temp/=10;
            cout<<rev<<"rev"<<endl;
            cout<<temp<<"temp"<<endl;
           }
           
           sum = rev;
           temp = sum;
        }
        return sum;
    }
};