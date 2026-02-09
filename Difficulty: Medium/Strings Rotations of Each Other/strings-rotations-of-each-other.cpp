class Solution {
  public:
    bool areRotations(string &s1, string &s2) {
        if (s1.size() != s2.size()) return false;
        // If s2 is rotation of s1, then s2 must be substring of (s1 + s1)
        string doubled = s1 + s1;
        return (doubled.find(s2) != string::npos);
    }
};
