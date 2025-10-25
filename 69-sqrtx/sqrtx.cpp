class Solution {
public:
    int mySqrt(int x) {

        int i = 1;

        int j = x;

        while(i <= j){
            int mid = i + (j-i) / 2;
            long long sq = 1ll * mid * mid;
            if(sq > x) j = mid - 1;
            else if(sq < x) i = mid + 1;

            else{
                return mid;
            }
        }


        return j;
        
    }
};