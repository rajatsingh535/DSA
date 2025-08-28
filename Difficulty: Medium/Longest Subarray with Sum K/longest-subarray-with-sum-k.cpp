class Solution {
  public:
    int longestSubarray(vector<int>& a, int k) {
        int n = a.size();
        map<int, int> m;
      
            int l = 0;
            m[0] = -1;
            int sum = 0;
            for(int i = 0; i < n ; i++){
                     sum+=a[i];
                if(m.find(sum-k)!=m.end()){
                     l = max(l,i-m[sum-k]);
                 }
                if(m.find(sum)==m.end())
                     m[sum] = i;
        }
      
      
      return l;
      
      
    }
};





