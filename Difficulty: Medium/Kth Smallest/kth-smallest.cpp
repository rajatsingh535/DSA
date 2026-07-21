class Solution {
	public:
	int kthSmallest(vector<int> &arr, int k) {
		
		priority_queue<int> maxHeap;
		
		for (int num : arr) {
			maxHeap.push(num);
			
			if (maxHeap.size() > k) {
				maxHeap.pop();
			}
		}
		
		return maxHeap.top();
	}
};
