class Solution {
public:
    int maxChunksToSorted(vector<int>& arr) {
        stack<int> st;

        for(int i=0 ; i<arr.size() ; i++){
            int x = arr[i];

            if(st.empty() || x >= st.top()){
                st.push(x);
            }
            else{
                int mx = st.top();
                while(!st.empty() && st.top() > x){
                    st.pop();
                }
                st.push(mx);
            }
        }

        return st.size();
    }
};