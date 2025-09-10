class Solution {
  public:
    bool checkEqual(vector<int>& a, vector<int>& b) {
        
     if (a.size() != b.size()) return false;
        
      unordered_map<int , int>m1;
      for(auto i : a) m1[i]++;
      
      for(auto i : b){
          if(m1.find(i)==m1.end()||m1[i]==0) return false;
          m1[i]--;
      }
          
  
   
      return true;
    
    }
};


