class Solution {
  public:
    vector<int> countLessEq(vector<int>& a, vector<int>& b) {
        // Sort array b
        sort(b.begin(), b.end());
        
        vector<int> result;
        
        // For each element in a
        for(int i = 0; i < a.size(); i++) {
            // Count elements <= a[i]
            int count = upper_bound(b.begin(), b.end(), a[i]) - b.begin();
            result.push_back(count);
        }
        
        return result;
    }
};