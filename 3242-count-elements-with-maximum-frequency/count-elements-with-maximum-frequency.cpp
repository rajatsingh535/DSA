class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int , int> map;
        for(int i = 0; i < n; i++) map[nums[i]]++;
        int max_f = 0; 
        for (auto& i : map) {
            max_f = max(max_f, i.second);
        }
    // --- Step 2: Sum the counts of elements with that max frequency ---
        int total_count = 0;
        for (auto& i : map) {
            if (i.second == max_f) {
                total_count += i.second; 
            }
        }

    
      return total_count;
        
    }
};