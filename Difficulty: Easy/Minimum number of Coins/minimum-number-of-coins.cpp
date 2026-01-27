class Solution {
  public:
    int findMin(int N) {
        
        int count = 0;
    
        int arr[] = {1,2,5,10};
        
        int i = 3;
        
        while(i >= 0){
            if(arr[i] <= N){
                while(N >= arr[i]){
                    N -= arr[i];
                    count++;
                }
            }
            
            i--;
            
        }
        
        
        return count;
        
        
    }
};