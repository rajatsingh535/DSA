class Solution {
  public:
    int convertFive(int n) {
        
        if(n == 0) return 5;
    
    
        long long ans = 0;
        int place = 1;
        while(n != 0){
            
            int digit = n % 10;
            
            if(digit == 0) digit = 5;
            ans = ans +  digit * place;
            place = place *  10;
            n = n / 10;
        }
        
        
        return ans;
        
    }
};