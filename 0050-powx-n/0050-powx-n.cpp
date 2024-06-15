class Solution {
public:
    double myPow(double x, int n) 
    {
        double ans =1;
        if(n==1) return x;
        if(n==0) return 1;
        if(n<0) 
        {
            n = abs(n);
            x  = 1/x;
        };
        

        if(n%2==0)
        {
            ans = myPow(x*x,n/2);

        }
        else 
        {
            ans = x*myPow(x,n-1);
        }

        return ans;
    }
};