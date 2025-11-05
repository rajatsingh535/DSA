class Solution {
  public:
    double fractionalKnapsack(vector<int>& val, vector<int>& wt, int cap) {
        int n = val.size();
    vector<pair<double, int>> ratio;

    for(int i = 0; i < n; i++){
        ratio.push_back({(double)val[i]/wt[i] , i});
    }

    sort(ratio.rbegin(),ratio.rend());

    double tot = 0.0;

    for(int i = 0; i < n; i++){
       int idx = ratio[i].second;
       double itemratio = ratio[i].first;
       if(cap >= wt[idx]){
           tot += val[idx];
           cap -= wt[idx];
       }

       else{
        tot += cap * itemratio;
        break;
       }

    }

    return tot;
    }
};
