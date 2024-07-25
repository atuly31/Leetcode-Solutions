class Solution {
public:
    bool check(vector<int>& arr) {
        int n = arr.size();
        int j = 0;
        while (j < n - 1) {
            if (arr[j] > arr[j + 1]) {
                break;
            }
            j++;
        }
        int x = j + 1;
        vector<int> res(n);
        for (int i = 0; i < n; i++) {
            res[i] = arr[i];
        }
        sort(res.begin(), res.end());
        for (int i = 0; i < n; i++) {
            if (res[i] != arr[(i + x) % n]) {
                return false;
            }
        }
        return true;
    }
};