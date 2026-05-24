class Solution {
  public:
    int sumOfMatrix(vector<vector<int>>& mat) {
        
        
        int r1 = mat.size();
        int c1 = mat[0].size();
        
    
        int sum = 0;
        
        for(int i = 0; i < r1; i++){
            
            for(int j = 0; j < c1; j++){
                
                sum +=  mat[i][j];
            }
        }
        
        
        return sum;
    }
};