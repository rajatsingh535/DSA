class Solution {
  public:
    int cntSubarrays(vector<int> &arr, int k) {
       int n = arr.size();
       unordered_map<int , int> map;
       int result = 0;
       int cumsum = 0;
       map.insert({0,1});
       for(int i = 0; i < n  ;  i++){
           cumsum += arr[i];
           
           if(map.find(cumsum-k)!=map.end()){ 
               result += map[cumsum-k];
           }
           
           map[cumsum]++;
           
       }
       
       return result;
        
    }
};