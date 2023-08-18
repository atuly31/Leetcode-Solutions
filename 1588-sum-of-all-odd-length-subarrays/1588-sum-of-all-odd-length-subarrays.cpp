class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
     int sum = 0;
     int n = arr.size();
    for(int i=0;i<n;i++){
        int con = ((i+1)*(n-i)+1)/2;
        sum = sum+con*arr[i];
    }
        return sum;
    }
};