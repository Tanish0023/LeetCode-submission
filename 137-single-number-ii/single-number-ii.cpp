class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int, int> mp;

        for(int i = 0; i < nums.size(); i++){
            for(int j = 0; j < 32; j++){
                if((nums[i] & (1 << j)) != 0){
                    mp[j]++;
                }
            }
        }

        int num = 0;
        for(auto it:mp){
            if(it.second % 3 != 0){
                num = num | (1 << it.first);
            }
        }

        return num;
    }
};