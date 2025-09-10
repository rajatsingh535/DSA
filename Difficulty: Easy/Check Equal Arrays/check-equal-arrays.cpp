class Solution {
  public:
    bool checkEqual(vector<int>& a, vector<int>& b) {
      unordered_map<int , int>m1,m2;
      for(auto i : a) m1[i]++;
      for(auto i : b) m2[i]++;
      
      if(m1==m2) return true;
      else return false;
      
        
    }
};


