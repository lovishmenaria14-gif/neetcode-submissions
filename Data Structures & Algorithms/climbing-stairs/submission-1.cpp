class Solution {
public:
    int wtf[1001] = {0};
    int climbStairs(int n) {
        return dfs(n,0);
    }
    int dfs(int n,int i){
        if(i>=n) return i==n;
        if(wtf[i] != 0) return wtf[i];
        return wtf[i] = dfs(n,i+1)+dfs(n,i+2);
    }
};
