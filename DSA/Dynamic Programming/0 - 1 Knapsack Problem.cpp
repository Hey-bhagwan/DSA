class Solution {
    int[][] dp;

    public int knapsack(int W, int val[], int wt[]) {
        dp = new int[val.length][W + 1];

        for (int[] row : dp)
            Arrays.fill(row, -1);

        return solve(0, W, val, wt);
    }

    int solve(int i, int W, int[] val, int[] wt) {
        if (i == val.length)
            return 0;

        if (dp[i][W] != -1)
            return dp[i][W];

        int notTake = solve(i + 1, W, val, wt);

        int take = 0;
        if (wt[i] <= W)
            take = val[i] + solve(i + 1, W - wt[i], val, wt);

        return dp[i][W] = Math.max(take, notTake);
    }
}