class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int>mp;
        int cnt =0, left= 0;
        for (int i =0; i<s.size();i++) {
            mp[s[i]]++;
            while (mp[s[i]] > 1) {
                mp[s[left]]--;
                left++;
            }

            cnt = max(cnt, i - left + 1);
        }

        return cnt;
    }
};