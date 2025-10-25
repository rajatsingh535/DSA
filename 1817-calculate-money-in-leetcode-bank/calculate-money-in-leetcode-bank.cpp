class Solution {
public:
    int totalMoney(int n) {
        
        int mon_money = 1;
        int result = 0;

        while(n > 0){
            int money = mon_money;
            for(int day = 1; day <= min(n,7); day++){

                result += money;
                money++;

            }

            n = n - 7;
            mon_money++;
        }


        return result;
        
    }
};

