class Solution {
public:
    long long pickGifts(vector<int>& gifts, int k) {

        priority_queue<int> maxHeap(gifts.begin(), gifts.end());

        while (k > 0) {
            int max = maxHeap.top();

            maxHeap.pop();

            maxHeap.push(sqrt(max));

            k--;
        }

        long long total = 0;

        while (!maxHeap.empty()) {
            total += maxHeap.top();
            maxHeap.pop();
        }

        return total;
    }
};