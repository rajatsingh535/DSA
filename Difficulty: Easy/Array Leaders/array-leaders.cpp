

class Solution {
    // Function to find the leaders in the array.
  public:
    vector<int> leaders(vector<int>& arr) {
        int n = arr.size();
        stack<int> st;
        
        int maxright = INT_MIN;
        
        for(int i = n - 1; i >= 0; i--){
            if(arr[i] >= maxright){
                
                st.push(arr[i]);
                maxright = arr[i];
                
            }
        }
        
        
        vector<int> ans;
        while(!st.empty()){
            ans.push_back(st.top());
            st.pop();
        }
       
        
        return ans;
        
    }
};