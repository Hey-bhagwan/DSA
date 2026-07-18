class Solution {
    int missingNum(int arr[]) {
        // code here
        long n = arr.length+1;
        
        long nsum = (n * (n+1))/2;
        
        long total = 0;
        for(int m : arr){
            total += m;
        }
        
        return (int)(nsum - total);
    }
}