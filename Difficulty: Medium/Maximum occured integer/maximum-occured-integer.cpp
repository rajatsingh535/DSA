class Solution {
  public:
    int maxOccured(vector<int>& L, const vector<int>& R) {
        
        
    const int MAX = 1000002;  // R[i] ≤ 10^6, so MAX = 10^6 + 2 is safe
    vector<int> freq(MAX, 0);

    // Step 1: Difference array approach
    for (size_t i = 0; i < L.size(); ++i) {
        freq[L[i]] += 1;
        freq[R[i] + 1] -= 1;
    }

    // Step 2: Prefix sum to compute actual frequencies
    int maxFreq = freq[0], result = 0;
    for (int i = 1; i < MAX; ++i) {
        freq[i] += freq[i - 1];
        if (freq[i] > maxFreq) {
            maxFreq = freq[i];
            result = i;
        }
    }

    return result;
       
       
       
       
       
    }
};