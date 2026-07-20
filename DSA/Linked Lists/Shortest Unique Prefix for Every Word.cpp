
        for (int i = 0; i < arr.length; i++) {

            String res = arr[i];   // default to whole word

for (int len = 1; len <= arr[i].length(); len++) {
    String prefix = arr[i].substring(0, len);

    boolean unique = true;

    for (int j = 0; j < arr.length; j++) {
        if (i == j) continue;

        if (arr[j].startsWith(prefix)) {
            unique = false;
            break;
        }
    }

    if (unique) {
        res = prefix;
        break;
    }
}

ans.add(res);
        }

        return ans;
    }
}