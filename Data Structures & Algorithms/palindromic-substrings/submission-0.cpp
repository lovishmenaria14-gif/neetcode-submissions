class Solution {
public:
    int countSubstrings(string s) {
        int ans =0;
        int n=s.size();
        for(int i =0; i<n; i++){
            for(int j=i; j<n; j++){
                int l =i,r=j;
                while(l<r && s[l]==s[r]){
                    l++;
                    r--;
                }
                ans +=(l>=r);
            }
        }
        return ans;
    }
};
