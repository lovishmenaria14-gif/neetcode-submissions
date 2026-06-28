class Solution {
public:
    vector<int> countBits(int n) {
        vector<int>cnt(n+1);
        for(int i =1; i<=n; i++){
            for(int j =0; j<32; j++){
                if(i&(1<<j)){
                    cnt[i]++;
                }
            }
        }
        return cnt;
    }
};
