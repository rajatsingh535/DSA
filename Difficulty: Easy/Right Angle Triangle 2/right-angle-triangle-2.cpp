void triangle(int s) {
    if (s <= 0) return;

    // First row
    cout << "*\n";

    // Middle rows (2 to s-1)
    for (int i = 2; i < s; i++) {
        cout << "* ";               // starting star with space
        for (int j = 1; j <= i - 2; j++) {
            cout << "  ";           // two spaces (because pattern uses star + space)
        }
        cout << "*\n";              // ending star
    }

    // Last row
    if (s > 1) {
        for (int i = 1; i <= s; i++) {
            cout << "* ";
        }
        cout << "\n";
    }
}
