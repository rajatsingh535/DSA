void swap(int &a, int &b) {
	
	a = a ^ b;
	
	b = b ^ a;
	
	a = a ^ b;
	
	// step 1 a ^ b
	// step 2   b ^ a ^ b = a hence b swap;
	// step 3    a = a * b = a ^ b ^ a = b  hence a swap

	
}
