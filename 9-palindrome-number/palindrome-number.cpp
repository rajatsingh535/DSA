class Solution {
public:
    bool isPalindrome(int x) {

        int o = x;

        if(x < 0) return false;

        long long rev = 0;

        while(x > 0){
            long last = x % 10;
            rev = rev * 10 + last;
            x = x / 10;

        }

       return (o==rev);
    

        
    }
};