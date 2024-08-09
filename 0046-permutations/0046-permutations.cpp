class Solution {
public:
 void get_permutution(vector<int> &vec, vector<vector<int>> &ans, unordered_set<int> mp, vector<int> &ds)
    {
        if (ds.size() == vec.size())
        {
            ans.push_back(ds);
            return;
        }

        for (int i = 0; i < vec.size(); i++)
        {
            if (mp.find(vec[i]) == mp.end())
            {
                ds.push_back(vec[i]);
                mp.insert(vec[i]);

                get_permutution(vec, ans, mp, ds);
                ds.pop_back();
                mp.erase(vec[i]);
            }
        }
    }
    vector<vector<int>> permute(vector<int>& vec) {
    vector<int> ds;
    vector<vector<int>> ans;
    unordered_set<int> used;
    get_permutution(vec, ans, used, ds);
    return ans;
    }
};