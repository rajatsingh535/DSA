class Solution {
  public:
    int convertFive(int n) {
       if(n == 0) return 5;
       int mul = 1;
       int ans = 0;
       while(n != 0)
        {
            int digit = n % 10;
            if(digit == 0){
                digit = 5;
            }
            
            ans = ans + digit * mul;
            mul *= 10;
            n = n / 10;
            
        }
        
        return ans;
    }
};