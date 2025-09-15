class Solution {
  public:
    vector<vector<int>> countFreq(vector<int>& arr) {
        // code here
        unordered_map<int , int> hash;
        
        int n = arr.size();
        
        for(int i = 0; i < n ; i++){
            hash[arr[i]]++;
        }
        
        vector<vector<int>> result;
        
        for(auto const&pair : hash){
            
            result.push_back({pair.first,pair.second});
        }
            
    return result;
        
        
    }
};