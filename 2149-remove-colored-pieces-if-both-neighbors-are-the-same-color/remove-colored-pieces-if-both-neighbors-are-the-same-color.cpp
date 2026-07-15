class Solution {
public:
    bool winnerOfGame(string colors) {
        int n=colors.size(),o=0;
        for(int i=2;i<n;i++){
            if(colors[i-2]=='A'&& colors[i-1]=='A' && colors[i]=='A'){
                o++;
            }
            if(colors[i-2]=='B'&& colors[i-1]=='B' && colors[i]=='B'){
                o--;
            }
        }
        return o>0;
    }
};