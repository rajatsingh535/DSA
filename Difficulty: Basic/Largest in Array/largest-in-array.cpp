class Solution {
  public:
    int largest(vector<int> &arr) {
        int mx = arr[0];   // assume first element is largest
        
        for(int i = 1; i < arr.size(); i++) {
            if(arr[i] > mx)
                mx = arr[i];
        }
        
        return mx;
    }
};
