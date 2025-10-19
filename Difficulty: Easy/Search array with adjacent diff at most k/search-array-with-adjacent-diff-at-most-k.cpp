class Solution {
  public:
    int findStepKeyIndex(vector<int>& arr, int k, int x) {
        int n = arr.size();
        int i = 0;
        
        while (i < n) {
            if (arr[i] == x)
                return i;
            
            // Jump ahead by how far we can skip
            int jump = abs(arr[i] - x) / k;
            if (jump == 0)
                jump = 1;
            i += jump;
        }
        return -1;
    }
};
