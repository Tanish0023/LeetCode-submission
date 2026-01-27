class Solution {
public:
    void rec(int index, 
        vector<vector<int>>& ans, 
        vector<int>& temp, 
        vector<int>& candidates,
        int target)
    {
        
        if(target == 0){
            ans.push_back(temp);
            return;
        }

        if(index == candidates.size() || target < 0){
            return;
        }

        temp.push_back(candidates[index]);
        rec(index, ans, temp, candidates, target - candidates[index]);

        temp.pop_back();
        rec(index + 1, ans, temp, candidates, target);
    }

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;

        if(candidates.size() == 1){
            if(candidates[0] > target){
                return ans;
            }
        }

        vector<int> temp;

        rec(0, ans, temp, candidates, target);

        return ans;
    }
};