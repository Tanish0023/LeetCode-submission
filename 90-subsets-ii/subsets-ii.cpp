class Solution {
public:
    void rec(int index,
             vector<int>& nums,
             vector<int>& temp,
             vector<vector<int>>& ans) {

        ans.push_back(temp);

        for (int i = index; i < nums.size(); i++) {

            // skip duplicates
            if (i > index && nums[i] == nums[i - 1])
                continue;

            temp.push_back(nums[i]);
            rec(i + 1, nums, temp, ans);
            temp.pop_back();
        }
    }

    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        vector<vector<int>> ans;
        vector<int> temp;

        rec(0, nums, temp, ans);
        return ans;
    }
};
