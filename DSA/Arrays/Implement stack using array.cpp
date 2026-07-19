
    public myStack(int n) {
        arr = new int[n];
        curr = 0;
    }

    public boolean isEmpty() {
        return curr == 0;
    }

    public boolean isFull() {
        return curr == arr.length;
    }

    public void push(int x) {
        if (!isFull()) {
            arr[curr++] = x;
        }
    }

    public void pop() {
        if (!isEmpty()) {
            curr--;
        }
    }

    public int peek() {
        if (isEmpty()) return -1;
        return arr[curr - 1];
    }
}