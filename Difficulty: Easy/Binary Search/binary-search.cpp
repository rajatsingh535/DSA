class Solution {
  public:
    int binarysearch(vector<int> &arr, int k) {
        int low = 0;
        int high = arr.size() - 1;
        int first = -1;
        while(low <= high){
            int mid = low + (high - low) / 2;
            if(arr[mid] == k){
               first = mid;
               high = mid - 1;
            }
            
            else if(arr[mid] > k){
                high = mid - 1;
            }
            
            else{
                low = mid + 1;
            }
        }
        
    return first;
        
    }  
  
};
