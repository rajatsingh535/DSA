class Solution {
public:
    string multiplyStrings(string &s1, string &s2) {
        // Step 1: Handle sign
        int sign = 1;
        if (s1[0] == '-') {
            sign *= -1;
            s1 = s1.substr(1);
        }
        if (s2[0] == '-') {
            sign *= -1;
            s2 = s2.substr(1);
        }

        // Step 2: Remove leading zeros
        while (s1.size() > 1 && s1[0] == '0') s1.erase(0, 1);
        while (s2.size() > 1 && s2[0] == '0') s2.erase(0, 1);

        // If any number becomes "0"
        if (s1 == "0" || s2 == "0") return "0";

        int n1 = s1.size(), n2 = s2.size();
        vector<int> result(n1 + n2, 0);

        // Step 3: Multiply digit by digit (like schoolbook method)
        for (int i = n1 - 1; i >= 0; i--) {
            for (int j = n2 - 1; j >= 0; j--) {
                int mul = (s1[i] - '0') * (s2[j] - '0');
                int sum = mul + result[i + j + 1];

                result[i + j + 1] = sum % 10;
                result[i + j] += sum / 10;
            }
        }

        // Step 4: Convert vector to string, skipping leading zeros
        string ans = "";
        int i = 0;
        while (i < result.size() && result[i] == 0) i++;

        for (; i < result.size(); i++)
            ans.push_back(result[i] + '0');

        // Step 5: Apply sign
        if (sign == -1) ans = "-" + ans;

        return ans;
    }
};
