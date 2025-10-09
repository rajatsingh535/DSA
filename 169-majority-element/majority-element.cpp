class Solution {
public:
    int majorityElement(vector<int>& nums) {
        
        int n = nums.size();
        int check = n/2;

        unordered_map<int , int> map;
        for(int i = 0; i < n; i++){
            map[nums[i]]++;
        }

        for(auto i : map){
            int f = i.second;
            int n = i.first;
            if(f > check) return n;
        }

        return -1;

        
    }
};