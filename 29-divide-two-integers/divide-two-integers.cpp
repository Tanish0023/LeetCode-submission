class Solution {
public:
    int divide(int dividend, int divisor) {
        
        // overflow case
        if(dividend == INT_MIN && divisor == -1)
            return INT_MAX;

        long long n = llabs((long long)dividend);
        long long m = llabs((long long)divisor);

        bool sign = (dividend >= 0) == (divisor >= 0);

        long long counter = 0;

        while(n >= m){
            long long temp = 0;

            while(n >= (m << (temp + 1))){
                temp++;
            }

            counter += (1LL << temp);
            n -= (m << temp);
        }

        if(!sign) counter = -counter;

        return (int)counter;
    }
};
