class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int maxw = 0;

        int i = 0 , j = n - 1;

        while(i < j){
            int w = j - i;
            int h = min(height[i] , height[j]);
            int container = w * h;
            maxw = max(maxw , container);

            height[i] < height[j] ? i++ : j--;
        }

        return maxw;
        
    }
};