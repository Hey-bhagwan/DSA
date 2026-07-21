class Solution {
    public int maxIndexDifference(String s) {
        int n = s.length();

        int[] best = new int[26];
        Arrays.fill(best, -1);

        int ans = -1;

        for (int i = n - 1; i >= 0; i--) {
            int cur = s.charAt(i) - 'a';

            int end = i;

            if (cur < 25 && best[cur + 1] != -1) {
                end = Math.max(end, best[cur + 1]);
            }

            best[cur] = Math.max(best[cur], end);

            if (cur == 0) {
                ans = Math.max(ans, end - i);
            }
        }

        return ans;
    }
}