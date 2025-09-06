class Solution {
public:
    bool checkSubarraySum(vector<int>& arr, int k) {
        //Revise
        int n = arr.size();
       
        unordered_map<int , int> mp;
        int prefix = 0;
        for(int i = 0; i < n ; i++){
            prefix += arr[i];
            int rem = prefix % k;
            if(rem == 0 && i >= 1) return true;
            if(mp.find(rem)!=mp.end()){

                int idx = mp[rem];
                if((i-idx>=2))return true;

            }
            else{
                mp[rem] = i;
            }
        }

        return false;
        
    }
};