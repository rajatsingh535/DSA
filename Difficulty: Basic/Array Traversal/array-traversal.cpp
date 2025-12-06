void arrayTraversal(int numbers[], int size) {
    for(int i = 0; i < size; i++) {
        cout << numbers[i];
        if(i != size - 1) cout << " ";  // add space after each element except last
    }
}
