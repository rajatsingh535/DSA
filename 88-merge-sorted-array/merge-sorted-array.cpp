class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
            int i = m - 1;     // nums1 ka last valid element
            int j = n - 1;     // nums2 ka last element
            int k = m + n - 1; // nums1 ka last index (jaha fill karna hai)

            // Jab tak dono arrays me elements hain
            while (i >= 0 && j >= 0) {
                if (nums1[i] > nums2[j]) {
                    nums1[k] = nums1[i];
                    i--;
                } else {
                    nums1[k] = nums2[j];
                    j--;
                }
                k--;
            }

            // Agar nums2 ke elements bache hain
            while (j >= 0) {
                nums1[k] = nums2[j];
                j--;
                k--;
            }
        }
    
};