class Solution {
    public boolean findPair(int[] arr, int x) {

        Set<Integer> set = new HashSet<>();

        for (int n : arr)
            set.add(n);

        if (x == 0) {
            Set<Integer> seen = new HashSet<>();
            for (int n : arr) {
                if (!seen.add(n))
                    return true;
            }
            return false;
        }

        for (int n : arr) {
            if (set.contains(n + x) || set.contains(n - x))
                return true;
        }

        return false;
    }
}