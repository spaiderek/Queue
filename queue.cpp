int push(int val) {
    if (size < CAPACITY) {
        queue[size++] = val;
        return 1;
    }
    return 0;
}