class Solution {
  public:
    vector<vector<int>> multiply(vector<vector<int>>& mat1, vector<vector<int>>& mat2) {
        
        
        int r1 , c1 , r2 , c2;
        
        r1 = mat1.size();
        r2 = mat2.size();
        
        
        c1 = mat1[0].size();
        c2 = mat2[0].size();
        
        vector<vector<int>> ans;
        
        
        if(c1 == r2){
            
            for(int i = 0; i < r1; i++){
                vector<int> temp;
                for(int j = 0; j < c2; j++){
                    int sum = 0;
                    
                    for(int k = 0 ; k < c2; k++){
                        sum += mat1[i][k] * mat2[k][j];
                        
                    }
                    
                    temp.push_back(sum);
                }
                
                ans.push_back(temp);
            }
            
            
        }
        
        
        return ans;
        
        
    }
};