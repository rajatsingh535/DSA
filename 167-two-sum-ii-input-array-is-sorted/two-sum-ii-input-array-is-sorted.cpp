class Solution {
public:
    vector<int> twoSum(vector<int>& a, int k) {
        int n = a.size();

        int i = 0; 
        int j = n - 1;

        while(i < j){
            int sum = a[i] + a[j];
            if(sum < k) i++;
            else if(sum > k) j--;
            else return {i+1,j+1};
        }

        return {};
        
    }
};