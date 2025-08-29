class Solution {
public:
    void reverseString(vector<char>& s) {
        int n  = s.size();
        int pt1 = 0 , pt2 = n-1;
        while(pt1<pt2){
                swap(s[pt1],s[pt2]);
                pt1++;
                pt2--;
            
        }
        
    }
};