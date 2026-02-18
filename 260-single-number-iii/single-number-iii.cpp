class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        int xorr = 0;

        // Step 1: XOR of all elements
        for(int i : nums){
            xorr ^= i;
        }

        // Step 2: find rightmost set bit
        long rightMost = xorr & -(long)xorr;

        int xor1 = 0, xor2 = 0;

        // Step 3: divide into two groups
        for(int i : nums){
            if(i & rightMost){
                xor1 ^= i;
            }else{
                xor2 ^= i;
            }
        }

        return {xor1, xor2};
    }
};
