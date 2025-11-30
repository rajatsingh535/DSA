int* greaterElement(int arr[], int n) {
    // Make a copy and sort it
    vector<int> sorted(arr, arr + n);
    sort(sorted.begin(), sorted.end());
    
    // Allocate result array
    int* res = new int[n];
    
    for(int i = 0; i < n; i++) {
        // Find smallest element strictly greater than arr[i]
        auto it = upper_bound(sorted.begin(), sorted.end(), arr[i]);
        
        if(it == sorted.end()) {
            res[i] = -10000000;  // No greater element
        } else {
            res[i] = *it;
        }
    }
    return res;
}
