class Solution {
public:
    int similarPairs(vector<string>& words) {
        int ans = 0;

        // Iterate through each word to compare with every other word
        for (int i = 0; i < words.size(); i++) {
            // Use a set to store unique characters of the current word
            set<char> set1(words[i].begin(), words[i].end());
            
            for (int j = i + 1; j < words.size(); j++) {
                // Use another set for the next word to compare
                set<char> set2(words[j].begin(), words[j].end());

                // Compare the sets
                if (set1 == set2) {
                    ans++;
                }
            }
        }

        return ans;
    }
};
