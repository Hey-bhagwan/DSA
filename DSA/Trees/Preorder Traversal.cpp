/*
class Node {
    int data;
    Node left;
    Node right;

    Node(int data) {
        this.data = data;
        left = null;
        right = null;
    }
}
*/

class Solution {
    ArrayList<Integer> res;
    public ArrayList<Integer> preOrder(Node root) {
        //  code here
        res = new ArrayList<>();
        
        helper(root);
        return res;
    }
    
    private void helper(Node n){
        if(n == null) return;
        
        res.add(n.data);
        helper(n.left);
        helper(n.right);
    }
    