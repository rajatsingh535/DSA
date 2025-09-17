// User function Template for C++

class Solution {
  public:
    string findLargest(int n, int s) {
      if (s == 0) {
        if (n == 1) {
            return "0"; // Agar 1 digit aur sum 0 chahiye, to 0 hi answer hai.
        } else {
            return "-1"; // Warna possible nahi hai.
        }
    }

    // Dusri condition: Agar sum possible hi na ho.
    if (s > 9 * n) {
        return "-1"; // Maximum possible sum se zyada hai.
    }

    string result = ""; // Apna answer store karne ke liye string.

    // Har digit ke liye loop chalao.
    for (int i = 0; i < n; i++) {
        // Agar bacha hua sum 9 se bada hai, toh 9 lelo.
        if (s >= 9) {
            result += '9';
            s -= 9;
        } else {
            // Warna jo bhi bacha hai, woh lelo.
            result += to_string(s);
            s = 0;
        }
    }

    return result;
        
    }
};