class Solution {
public:
    bool threeConsecutiveOdds(vector<int>& arr) {
         int left = 0;
        int ctr = 0;
        int k = 3;

        for (int right = 0; right < arr.size(); right++) {

            if (arr[right] % 2 != 0) {
                ctr++;
                if (ctr == 3)
                    return true;

            } else {
                ctr = 0;
            }

        }
    
        return false;
    }
};