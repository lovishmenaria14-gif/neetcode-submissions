class Solution {
public:
    int maxArea(vector<int>& heights) {
        int n =heights.size();
        int cnt =0;
        for(int i =0; i<n; i++){
            for(int j=i+1; j<n; j++){
                cnt = max(cnt,min(heights[i],heights[j])*(j-i));
            }
        }
        return cnt;
    }
};
