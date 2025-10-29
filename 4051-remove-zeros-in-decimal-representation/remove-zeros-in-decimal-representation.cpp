class Solution {
public:
    long long removeZeros(long long n) {
        long long temp = 0;

        while(n > 0){
            long long lastdigit = n % 10;
            if(lastdigit != 0){
                temp = temp * 10 + lastdigit;
            }

            n = n / 10;
        }
        long long ans = 0;

        while(temp > 0){
            long long d = temp % 10;
            ans = ans * 10 + d;
            temp = temp / 10;
        }

        return ans;

        
    }
};