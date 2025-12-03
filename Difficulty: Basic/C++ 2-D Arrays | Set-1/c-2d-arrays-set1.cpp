vector<vector<int>> transpose(int a[][M], int n) {
    vector<vector<int>> ans(n, vector<int>(n));

    // Fill transpose
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            ans[j][i] = a[i][j];
        }
    }

    return ans;
}
