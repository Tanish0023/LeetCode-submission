class Solution {
public:
    void rec(
        vector<vector<int>>& ans, 
        vector<int>& temp, 
        int k, 
        int n, 
        int sum,
        int id
        ){
        if(sum > n){
            return;
        }
        
        if(temp.size() == k){
            if(sum == n){
                ans.push_back(temp);
            }
            return;
        }

        for(int i = id; i <= 9; i++){
            temp.push_back(i);
            rec(ans, temp, k, n, sum + i, i + 1);
            temp.pop_back();
        }
    }

    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>> ans;
        vector<int> temp;

        rec(ans, temp, k, n, 0, 1);

        return ans;
    }
};