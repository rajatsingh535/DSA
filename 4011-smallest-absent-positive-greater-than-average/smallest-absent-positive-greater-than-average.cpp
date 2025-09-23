class Solution {
public:
    int smallestAbsent(vector<int>& nums) {
         int n = nums.size();
        double avgerage = 0;
        for(int x : nums){
            avgerage += x;
        }

        avgerage /= n;

        unordered_set<int> hash(nums.begin(),nums.end());
        for(int k = floor(avgerage) + 1; k <= 102 ; k++){
            if(k > 0 && hash.find(k)==hash.end()){
                return k;
            }
        }

        return 102;
        
    }
};