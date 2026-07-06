class Solution {
public:
int k(int n ){
    int sum =0;
    while(n>0){
    int digit = n%10;
    n/=10;
    sum+=digit*digit;
    }
    return sum;
}
    bool isHappy(int n) {
       unordered_set<int>st;
       while(n!=1 && !st.count(n)){
        st.insert(n);
        n = k(n);
       }
       return n ==1;
    }
};
