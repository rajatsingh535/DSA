class Solution {
public:
    int countPermutations(vector<int>& comp) {
        int n = comp.size();
        long long int ans = 1;
        const int mod = 1e9 + 7;
        for(int i = 1; i < n; i++){
            if(comp[i] <= comp[0]){
                return 0;
            }

            ans = (ans * 1ll * (i)) % mod;
        }

        return ans;
        
    }
};