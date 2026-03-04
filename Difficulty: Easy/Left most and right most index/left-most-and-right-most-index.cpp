class Solution {
  public:
    pair<long, long> indexes(vector<long long> v, long long x) {
        long n = v.size();
        long first = -1, last = -1;
        
        // Find first occurrence
        long low = 0, high = n - 1;
        while (low <= high) {
            long mid = low + (high - low) / 2;
            
            if (v[mid] == x) {
                first = mid;
                high = mid - 1;   // move left to find earlier occurrence
            }
            else if (v[mid] < x) {
                low = mid + 1;
            }
            else {
                high = mid - 1;
            }
        }
        
        // Find last occurrence
        low = 0;
        high = n - 1;
        while (low <= high) {
            long mid = low + (high - low) / 2;
            
            if (v[mid] == x) {
                last = mid;
                low = mid + 1;   // move right to find later occurrence
            }
            else if (v[mid] < x) {
                low = mid + 1;
            }
            else {
                high = mid - 1;
            }
        }
        
        return {first, last};
    }
};