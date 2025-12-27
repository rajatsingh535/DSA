class Solution {
  public:
    int intersectSize(vector<int> &a, vector<int> &b) {
        unordered_set<int> s;
        int count = 0;
        
        // Insert elements of array a into set
        for (int x : a) {
            s.insert(x);
        }
        
        // Check elements of array b
        for (int x : b) {
            if (s.find(x) != s.end()) {
                count++;
            }
        }
        
        return count;
    }
};
