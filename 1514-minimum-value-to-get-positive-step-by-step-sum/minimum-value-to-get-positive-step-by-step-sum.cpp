class Solution {
public:
    int minStartValue(vector<int>& nums) {
        //Optimal Approach
        int n = nums.size();
        int sum = 0 , ans = 1;
        int l = 1 , r = 10005;
        while(l <= r){
            int mid = (l+r)/2;
            int sum = mid , ok = 1;
            for(int i = 0; i < n; i++){
                sum+= nums[i];
                if(sum < 1){
                    ok = 0;
                    break;
                }
            }



            if(ok){
                ans = mid;
                r = mid - 1;
            }

            else{
                l = mid + 1;
            }
        }

        return ans;

    }
};