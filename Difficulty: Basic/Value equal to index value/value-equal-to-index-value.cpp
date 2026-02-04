class Solution {
  public:
    vector<int> valueEqualToIndex(vector<int>& arr) {
        vector<int> result;
        
        for(int i = 0; i < arr.size(); i++) {
            if(arr[i] == i + 1) {   // 1-based index check
                result.push_back(i + 1);
            }
        }
        
        return result;
    }
};
