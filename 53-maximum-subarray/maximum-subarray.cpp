class Solution {
public:
    int maxSubArray(vector<int>& b) {

        int n = b.size();

        long long sum = 0 , maxi = LONG_MIN;

        for(int i = 0; i < n; i++){

            sum += b[i];

            if(sum > maxi){
                maxi = sum;
            }

            if(sum < 0){
                sum = 0;
            }

        }


        return maxi;

      
    }
};