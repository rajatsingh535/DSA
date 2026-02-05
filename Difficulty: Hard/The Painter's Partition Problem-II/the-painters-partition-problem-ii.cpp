class Solution {
  public:
    bool canPaint(const vector<int>& arr, int k, long long maxTime) {
        long long curr = 0;
        int painters = 1;

        for (int x : arr) {
            if ((long long)x > maxTime) return false; // single board too large

            if (curr + x <= maxTime) {
                curr += x;
            } else {
                painters++;
                curr = x;
                if (painters > k) return false;
            }
        }
        return true;
    }

    int minTime(vector<int>& arr, int k) {
        int n = (int)arr.size();
        if (n == 0) return 0;

        long long low = 0, high = 0;
        for (int x : arr) {
            low = max(low, (long long)x); // at least the largest board
            high += x;                    // at most one painter does all
        }

        long long ans = high;
        while (low <= high) {
            long long mid = low + (high - low) / 2;
            if (canPaint(arr, k, mid)) {
                ans = mid;
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        return (int)ans;
    }
};
