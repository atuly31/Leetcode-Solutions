class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& mat) {
        if (mat.empty()) return {};

        // Sort the intervals by their start times
        sort(mat.begin(), mat.end());

        vector<vector<int>> vec;
        vec.push_back(mat[0]); // Initialize with the first interval

        for (int i = 1; i < mat.size(); i++) {
            // Get the last interval in the result
            vector<int>& lastInterval = vec.back();

            // Check if the current interval overlaps with the last interval
            if (lastInterval[1] >= mat[i][0]) {
                // Merge intervals by updating the end time
                lastInterval[1] = max(lastInterval[1], mat[i][1]);
            } else {
                // Add the current interval as it does not overlap
                vec.push_back(mat[i]);
            }
        }

        return vec;
    }
};
