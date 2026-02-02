class Solution {
  public:
    bool canAllocate(vector<int> &arr, int k, long long maxPages) {
        int students = 1;
        long long pages = 0;

        for (int x : arr) {
            if ((long long)x > maxPages) return false; // single book too big

            if (pages + x <= maxPages) {
                pages += x;
            } else {
                students++;
                pages = x;
                if (students > k) return false;
            }
        }
        return true;
    }

    int findPages(vector<int> &arr, int k) {
        int n = (int)arr.size();
        if (k > n) return -1;

        long long lo = 0, hi = 0;
        for (int x : arr) {
            lo = max(lo, (long long)x); // at least max single book
            hi += x;                    // at most all books to one student
        }

        long long ans = hi;
        while (lo <= hi) {
            long long mid = lo + (hi - lo) / 2;

            if (canAllocate(arr, k, mid)) {
                ans = mid;
                hi = mid - 1;   // try smaller maximum
            } else {
                lo = mid + 1;   // need bigger maximum
            }
        }
        return (int)ans;
    }
};
