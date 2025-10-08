class Solution {
  public:
    
    bool isSubset(vector<int> &a, vector<int> &b) {
        unordered_map<int, int> freq;

        for (int num : a) {
            freq[num]++;
        }

        for (int num : b) {
            if (freq[num] == 0) {
                return false;
            }
            freq[num]--;
        }

        return true;
      
    }
};

