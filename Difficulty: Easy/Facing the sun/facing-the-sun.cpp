class Solution {
  public:
    int countBuildings(vector<int> &height) {
        int count = 1; // first building always visible
        int maxHeight = height[0];
        
        for(int i = 1; i < height.size(); i++) {
            if(height[i] > maxHeight) {
                count++;
                maxHeight = height[i];
            }
        }
        
        return count;
    }
};