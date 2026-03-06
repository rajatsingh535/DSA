class Solution {
  public:
    vector<int> getMinMax(vector<int> &arr) {
        int mn = arr[0];
        int mx = arr[0];
        
        for(int i = 1; i < arr.size(); i++){
            if(arr[i] < mn){
                mn = arr[i];
            }
            if(arr[i] > mx){
                mx = arr[i];
            }
        }
        
        return {mn, mx};
    }
};