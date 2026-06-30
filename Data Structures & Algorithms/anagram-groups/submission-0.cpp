class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> mp;
        for (string x : strs) {
            string t = x;
            sort(t.begin(), t.end());
            mp[t].push_back(x);
        }
        vector<vector<string>> ans;
        for (auto it : mp) {
            ans.push_back(it.second);
        }

        return ans;
    }
};