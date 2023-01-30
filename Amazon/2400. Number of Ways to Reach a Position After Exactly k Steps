class Solution {
private:
    const int mod = 1e9 + 7;
    int dfs(int s, int e, int k, vector<vector<int>> &dp, int b) {
        if (s == e && k == 0) return 1;
        if (k == 0) return 0;
        k--;
        if (dp[s + b][k] != -1) return dp[s + b][k];
        int left = dfs(s - 1, e, k, dp, b);
        int right = dfs(s + 1, e, k, dp, b);
        return dp[s + b][k] = (left + right) % mod;
    }
public:
    int numberOfWays(int sp, int ep, int k) {
        int b = abs(sp - k);
        vector<vector<int>> dp(sp + b + k + 1, vector<int>(k, -1));
        return dfs(sp, ep, k, dp, b);
    }
};
