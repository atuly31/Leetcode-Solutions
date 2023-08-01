class Solution {
public:
    int gcd(int a,int b){
        if(a==0||b==0){
            return a+b;
        }
        else if(a==b){
            return a;
        }
        else  if(a>b){
            return gcd(a-b,b);
        }
        return gcd(a,b-a);
    }
    int findGCD(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int s = nums[0];
        int e = nums[nums.size()-1];
        int ans = gcd(s,e);
        return ans;
    }
};