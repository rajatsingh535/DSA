class Solution {
public:
    vector<int> findTwoElement(vector<int>& arr) {
        long long n = arr.size();
        long long sum_n = n*(n+1)/2;
        long long sum_sq_n = n*(n+1)*(2*n+1)/6;

        long long sum_arr = 0, sum_sq_arr = 0;
        for(int i=0;i<n;i++){
            sum_arr += arr[i];
            sum_sq_arr += (long long)arr[i]*arr[i];
        }

        long long S = sum_arr - sum_n;               // y - x
        long long P = sum_sq_arr - sum_sq_n;         // y^2 - x^2

        long long y_plus_x = P / S;

        long long y = (S + y_plus_x) / 2;
        long long x = y - S;

        return {(int)y, (int)x};
    }
};
