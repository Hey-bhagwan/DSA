        List<List<Integer>> ans = new ArrayList<>();
        for (int[] row : grid) {
            List<Integer> list = new ArrayList<>();
            for (int val : row)
                list.add(val);
            ans.add(list);
        }

        return ans;
    }
}
