class Solution {
  public:
    vector<int> findUnion(vector<int>& a, vector<int>& b) {
        set<int> s;
        
        // Insert elements of array a
        for(int i = 0; i < a.size(); i++) {
            s.insert(a[i]);
        }
        
        // Insert elements of array b
        for(int i = 0; i < b.size(); i++) {
            s.insert(b[i]);
        }
        
        // Convert set to vector
        vector<int> result(s.begin(), s.end());
        
        return result;
    }
};
