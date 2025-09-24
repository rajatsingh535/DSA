// User function template for C++
class Solution {
  public:
    /* Returns count of pairs with difference k  */
    int countPairs(vector<int>& b, int k) {
        
      int n = b.size();
       int count = 0;
    unordered_map<int, int> freqMap;

    // Step 1: Count the frequency of each element
        for (int x : b) {
            freqMap[x]++;
        }

       // Step 2: Iterate through the map to find pairs
        for (auto const& [num, freq] : freqMap) {
            if (k > 0) {
                // Check if the counterpart (num + k) exists
                if (freqMap.count(num + k)) {
                    count += freq * freqMap[num + k];
                }
            } else { // k == 0 case
                // Count pairs of the same element
                count += (freq * (freq - 1)) / 2;
            }
        }

        return count;
        
        
    }
};