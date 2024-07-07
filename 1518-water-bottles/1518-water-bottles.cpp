class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) 
    {
        int div = numBottles/numExchange;
        int rem = numBottles%numExchange + div;
        int ans = numBottles +div;
        while(rem>=numExchange)
        {
             div = rem/numExchange;
             rem=rem%numExchange + div;
             ans+=div;
        }
        return ans;
    }
};