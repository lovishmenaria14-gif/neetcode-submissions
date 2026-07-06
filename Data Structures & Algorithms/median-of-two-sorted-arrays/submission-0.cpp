class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n  =nums1.size();
        int m =nums2.size();
        vector<int>ans;
        for(int x:nums1){
            ans.push_back(x);
        }
        for(int x:nums2){
            ans.push_back(x);
        }
        int k =ans.size();
        sort(ans.begin(),ans.end());
         if (k % 2 == 0) {
            return (ans[k/2 - 1]+ans[k / 2])/ 2.0;
        }
        return ans[k / 2];
    }
};
