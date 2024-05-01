class Solution {
public:
    int reverse(long x){
        long rev=0;
        while(x!=0)
        {
          
          int digit = x%10;
          rev = rev*10+digit;
          x=x/10; 
        }
        return rev;
    }
    bool isPalindrome(long x) {
        if(x<0) return false;
        int rev = reverse(x);
        if(x==rev) return true;
        return false;
    }
};