class Solution {
public:
    int jump(vector<int>& nums) {

        int n = nums.size();

        int total = 0;

        int cov = 0 , des = n - 1 , lastjump = 0;

        if( n == 1) return 0;

        for(int i = 0; i < n; i++){
            cov = max(cov , nums[i] + i);

            if(i == lastjump){
                lastjump = cov;
                total++;

                if(cov >= des){
                    return total;
                }
            }
        }

        return total;
        
    }
};