class Solution {
  public:
    int cntSubarrays(vector<int> &arr, int k) {
        int n = arr.size();
        
        unordered_map<int , int> mp;
        
        int sum = 0 , cnt = 0;
        
        mp.insert({0,1});
        
        
        for(int i = 0; i < n; i++){
            sum += arr[i];
            if(mp.find(sum-k)!=mp.end()){
                cnt += mp[sum-k];
            }
            
            mp[sum]++;
        }
        
        
        return cnt;
        
    }
};