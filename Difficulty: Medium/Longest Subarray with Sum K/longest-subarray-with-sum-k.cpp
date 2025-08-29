class Solution {
  public:
    int longestSubarray(vector<int>& a, int k) {
        int n = a.size();
        unordered_map<long long, int> m;
      
           int l = 0;
           long long sum = 0;
            for(int i = 0; i < n ; i++){
                     sum+=a[i];
                     if(sum==k){
                         l = max(l,i+1);
                     }
                     
                 else if(m.find(sum-k)!=m.end()){
                     l = max(l,i-m[sum-k]);
                 }
                 if(m.find(sum)==m.end()){
                 m[sum] = i;
                     
                 }
               
        }
      
      
      return l;
      
      
    }
};





