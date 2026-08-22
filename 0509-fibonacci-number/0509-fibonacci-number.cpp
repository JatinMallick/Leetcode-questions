class Solution {
public:
    unordered_map<int,int>dp;
    int fib(int n) {
        if(n==0 ||n==1) return n;
        if(dp.find(n)!=dp.end()) return dp[n];
        int a=fib(n-1);
        int b=fib(n-2);
        int ans=a+b;
        dp[n]=ans;
        return ans;
    }
};