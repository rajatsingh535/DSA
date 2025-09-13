class Solution {
  public:
    int minCost(int n, int m, vector<int>& x, vector<int>& y) {
        
        ios::sync_with_stdio(false);
cin.tie(nullptr);

        sort(x.rbegin(),x.rend());
        sort(y.rbegin(),y.rend());
        
        int i = 0 , j = 0;
        int h = 1 , v = 1;
        
        long long cost = 0;
        
        
        while(i<x.size()&&j<y.size()){
            
            if(x[i] >= y[j]){
                
                cost += 1LL * x[i] * h;
                v++;
                i++;
                
            }
            else{
                
                cost += 1LL * y[j] *  v;
                h++;
                j++;
                
            }
            
        }
        
      
        
        while(i <  x.size()) {
    
            cost += 1LL * x[i]  * h;
            v++;
            i++;
            
        }
        
        while(j < y.size()){
        
            cost += 1LL * y[j]  * v;
            h++;
            j++;
            
            
        }
        
        
        return (int) cost;
        
        
        
        
    }
};
