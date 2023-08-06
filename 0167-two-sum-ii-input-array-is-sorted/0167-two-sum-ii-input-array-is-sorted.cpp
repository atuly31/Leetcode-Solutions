class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
     //sort(nums.begin(),nums.end());
        int i=0,p,q;
        int j=numbers.size()-1;
     while(i<j){
         if(numbers[i]+numbers[j]>target) j--;
         else if(numbers[i]+numbers[j]<target) i++;
         else {
             p=i;
             q=j;
             break;
         }
         
        }
        return{p+1,q+1};   
    }
};