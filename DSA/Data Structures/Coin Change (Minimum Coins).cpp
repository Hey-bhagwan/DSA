        dp = new int[coins.length][sum + 1];

        for (int[] row : dp)
            Arrays.fill(row, -1);

        int ans = helper(coins, coins.length - 1, sum);

        return ans >= INF ? -1 : ans;
    }

    private int helper(int[] coins, int i, int sum) {

        if (sum == 0)
            return 0;

        if (i < 0)
            return INF;

        if (dp[i][sum] != -1)
            return dp[i][sum];

        int take = INF;

        if (coins[i] <= sum)
            take = 1 + helper(coins, i, sum - coins[i]); // reuse same coin

        int skip = helper(coins, i - 1, sum);

        return dp[i][sum] = Math.min(take, skip);
    }
}