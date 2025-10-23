class Solution {
public:
    bool canPlaceFlowers(vector<int>& f, int n) {
        int l = f.size();

        if(n == 0) return true;

        for(int i = 0; i < l; i++){
            if(f[i]==0){
                bool left = (i==0) || (f[i-1]==0);
                bool right = (i==l-1) || (f[i+1]==0);
                if(left&&right){
                    f[i] = 1;
                    n--;

                    if(n==0) return true;
                }
            }
        }

        return false;
        
    }
};