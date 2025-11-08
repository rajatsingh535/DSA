#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    vector<int> maxOfSubarrays(vector<int>& arr, int k) {
        deque<int> dq; // stores indexes
        vector<int> result;
        int n = arr.size();
        
        for (int i = 0; i < n; i++) {
            // Remove elements out of this window
            if (!dq.empty() && dq.front() == i - k)
                dq.pop_front();
            
            // Remove smaller elements from the back
            while (!dq.empty() && arr[dq.back()] <= arr[i])
                dq.pop_back();
            
            // Add new element's index
            dq.push_back(i);
            
            // The front of deque is the largest element in current window
            if (i >= k - 1)
                result.push_back(arr[dq.front()]);
        }
        
        return result;
    }
};

