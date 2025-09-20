class Solution {
  public:
    int totalElements(vector<int> &a) {
        
        int n = a.size();
        unordered_map<int , int> mp;
        int count = 0;
        for(int i = 0 , j = 0; j < n; j++){
            
            mp[a[j]]++;
            
            if(mp.size()<=2){
                
                count = max(count , j-i+1);
            }
            
            else{
                mp[a[i]]--;
                if(mp[a[i]]==0) mp.erase(a[i]);
                i++;
            }
             
        }
        
        return count;
        
    }
};