class Solution {
  public:
    vector<int> commonElements(vector<int> &arr1, vector<int> &arr2, vector<int> &arr3) {
        int i = 0, j = 0, k = 0;
        int n1 = arr1.size(), n2 = arr2.size(), n3 = arr3.size();
        vector<int> ans;

        while (i < n1 && j < n2 && k < n3) {
            // If all equal -> common element
            if (arr1[i] == arr2[j] && arr2[j] == arr3[k]) {
                // avoid duplicates in answer
                if (ans.empty() || ans.back() != arr1[i]) ans.push_back(arr1[i]);
                i++; j++; k++;
            }
            else {
                // move the pointer with smallest value
                int mn = min(arr1[i], min(arr2[j], arr3[k]));
                if (arr1[i] == mn) i++;
                if (arr2[j] == mn) j++;
                if (arr3[k] == mn) k++;
            }

            // skip duplicates inside each array (no extra DS)
            while (i > 0 && i < n1 && arr1[i] == arr1[i - 1]) i++;
            while (j > 0 && j < n2 && arr2[j] == arr2[j - 1]) j++;
            while (k > 0 && k < n3 && arr3[k] == arr3[k - 1]) k++;
        }

        if (ans.empty()) return {-1};
        return ans;
    }
};
