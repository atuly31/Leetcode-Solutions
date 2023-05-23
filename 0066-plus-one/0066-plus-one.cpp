class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
         short int i = digits.size() - 1;
        if (i >= 0) {
            while (i != -1) {
                digits[i] += 1;
                if (i == 0 && digits[i] == 10) {
                    digits[i] = 0;
                    digits.insert(digits.begin(), 1);
                }
                else if (digits[i] == 10) digits[i] = 0;
                else break;
                i--;
            }
        }
        return digits;
    
    
    }
};