class Solution {
    public int peakElement(int[] arr) {
        // code here
        int n = arr.length;
        int res = -1;
        for(int i = 0; i<n ; i++){
            int left = i-1 < 0 ? Integer.MIN_VALUE : arr[i-1];
            int right = i+1 == n ? Integer.MIN_VALUE : arr[i+1];
            
            int curr = arr[i];
            if(curr > left && curr > right){
                res= i;
                break;
            }
        }
        
        return res;
    }
}