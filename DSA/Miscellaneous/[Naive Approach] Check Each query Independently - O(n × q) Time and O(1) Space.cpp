import java.util.ArrayList;

public class Solution {

    // Process all queries and determine whether
    // each subarray forms a mountain.
    static ArrayList<Boolean> processQueries(int[] arr,
                                             int[][] queries) {
        int n = arr.length;

        // dec[i] stores the farthest index reachable
        // from i while maintaining a non-decreasing sequence.
        int[] dec = new int[n];
        dec[n - 1] = n - 1;

        for (int i = n - 2; i >= 0; i--) {
            if (arr[i] <= arr[i + 1]) {
                dec[i] = dec[i + 1];
            } else {
                dec[i] = i;
            }
        }

        // inc[i] stores the leftmost index reachable
        // from i while maintaining a non-increasing sequence.
        int[] inc = new int[n];
        inc[0] = 0;

        for (int i = 1; i < n; i++) {
            if (arr[i] <= arr[i - 1]) {
                inc[i] = inc[i - 1];
            } else {