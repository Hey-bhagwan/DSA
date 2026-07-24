class Solution {
    int ans = 1;

    public int longestConsecutive(Node root) {
        if (root == null) return -1;

        dfs(root, null, 1);

        return ans == 1 ? -1 : ans;
    }

    private void dfs(Node node, Node parent, int len) {
        if (node == null) return;

        if (parent != null) {
            if (node.data == parent.data + 1)
                len++;
            else
                len = 1;
        }

        ans = Math.max(ans, len);

        dfs(node.left, node, len);
        dfs(node.right, node, len);
    }
}