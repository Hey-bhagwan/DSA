
class Solution {
    static ArrayList<Integer> subarraySum(int[] arr, int target) {
        // code here
        ArrayList<Integer> res = new ArrayList<>();
        
        int n = arr.length;
        int i = 0, j = 0, sum = 0;
        while(i<n && j<n && i>=0 && j>=0){
            sum += arr[j];
            while(sum > target && i<=j){
                sum -= arr[i];
                i++;
            }
            if(sum == target){
                res.add(i+1);
                res.add(j+1);
                return res;
            }
            j++;
        }
        res.add(-1);
        return res;
    }
}
