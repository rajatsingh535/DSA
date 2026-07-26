class Solution {
	
	private:
	
	bool isPalindrome(int x) {
		
		int o = x;
		int rev = 0;
		while (x > 0) {
			
			rev = rev * 10 + x % 10;
			x = x / 10;
			
		}
		
		if (rev == o)
			return true;
		else
			return false;
		
	}
	public:
	
	bool isPalinArray(vector<int> &arr) {
		
		for (int x : arr) {
			
			if (!isPalindrome(x)) {
				
				return false;
			}
		}
		
		return true;
	}
};
