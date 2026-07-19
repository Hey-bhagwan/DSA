class Solution {
    int vis[];
    Stack<Integer> st;
    public ArrayList<Integer> topoSort(int V, int[][] edges) {
        // code here
        vis = new int[V];
        st = new Stack<>();
        
        for(int i = 0; i < V; i++){
            if(vis[i] == 0){
                helper(i, edges);
            }
        }
        
        ArrayList<Integer> res = new ArrayList<>();
        
        while(!st.isEmpty()){
            res.add(st.pop());
        }
        
        return res;
    }
    
    private void helper(int node,int[][] edges){
        vis[node] = 1;
        
        for(int[] edge : edges){
            if(edge[0] == node && vis[edge[1]] == 0){
                helper(edge[1],edges);
            }
        }
        