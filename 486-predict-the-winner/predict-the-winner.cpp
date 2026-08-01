class Solution {
public:
    int solve(vector<int>& nums, int i, int j, vector<vector<int>>& dp) {
        if (i == j)
            return nums[i];

        if (dp[i][j] != INT_MIN)
            return dp[i][j];

        int left = nums[i] - solve(nums, i + 1, j, dp);
        int right = nums[j] - solve(nums, i, j - 1, dp);

        return dp[i][j] = max(left, right);
    }

    bool predictTheWinner(vector<int>& nums) {
        int n = nums.size();
        vector<vector<int>> dp(n, vector<int>(n, INT_MIN));

        return solve(nums, 0, n - 1, dp) >= 0;
    }
};