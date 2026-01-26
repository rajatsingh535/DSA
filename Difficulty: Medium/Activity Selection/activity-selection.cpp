class Solution {
  public:
    int activitySelection(vector<int> &start, vector<int> &finish) {
        
        vector<pair<int,int>>temp;
        for(int i = 0; i < start.size(); i++) temp.push_back({start[i] , finish[i]} );
        
        auto comp = [&](auto &a, auto &b){
            
            return a.second < b.second;
        };
        
        
        sort(temp.begin() , temp.end(), comp);
        
        int count = 1;
        int curr = temp[0].second;
        
            
        for(int i = 1; i < start.size(); i++){
            if(temp[i].first > curr){
                count++;
                curr = temp[i].second;
            }
        }
        
        
        return count;
        
    
        
    }
};