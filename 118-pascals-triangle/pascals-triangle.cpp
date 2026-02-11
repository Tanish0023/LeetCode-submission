class Solution {
public:
    int nCrFn(int n, int r){
        int res = 1;
        for(int i = 0; i < r; i++){
            res *= (n - i);
            res /= (i + 1);
        }

        return res;
    }

    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;
        
        for(int i = 1; i <= numRows; i++){
            vector<int> temp(i, 1);
            for(int j = 1; j < i-1; j++){
                int res = nCrFn(i-1, j);
                temp[j] = res;
            }

            ans.push_back(temp);
        }

        return ans;
    }
};