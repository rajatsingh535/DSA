class Solution {
public:
    bool lemonadeChange(vector<int>& b) {
        int n = b.size();
        int five =  0 ,   ten = 0;

        for(int i = 0; i < n; i++){
            if(b[i] == 5) five = five + 1;
            else if(b[i] == 10){
                if(five != 0){
                    five -= 1;
                    ten += 1;

                }
                else return false;
            }

            else{
                if(ten != 0 && five != 0){
                    ten -= 1;
                    five -= 1;
                }
               else if(five >= 3){
                    five -= 3;
                }
                else{
                    return false;
                }
            }


        }

        return true;


        
        
    }
};