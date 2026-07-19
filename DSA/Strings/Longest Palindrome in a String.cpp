
class Solution {
    static String longestPalindrome(String s) {
        // code here
        int max = -1;
        String res = "";
        
        for(int i = 0; i<s.length() ; i++){
            for(int j = i; j<s.length(); j++){
                if(check(i,j,s)){
                    if(max < j-i+1){
                        res = s.substring(i,j+1);
                        max = j-i+1;
                    }
                }
            }
        }
        
        return res;
    }
    
    private static boolean check(int i, int j, String s){
        while(i<=j){
            if(s.charAt(i) != s.charAt(j)){
                return false;
            }
            i++;
            j--;
        }
        
        return true;
    }