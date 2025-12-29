class Solution {
  public:
    int search(int n, int arr[]) {
        int low = 0, high = n - 1;

        while (low < high) {
            int mid = low + (high - low) / 2;

            // Ensure mid is even
            if (mid % 2 == 1)
                mid--;

            // Pair is correct → single is on right side
            if (arr[mid] == arr[mid + 1])
                low = mid + 2;
            else
                high = mid;
        }

        return arr[low];
    }
};
