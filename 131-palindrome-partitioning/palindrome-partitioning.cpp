class Solution {
public:
    bool isPal(string s, int l, int r){
        while(l <= r){
            if(s[l] != s[r]){
                return false;
            }
            l++;
            r--;
        }
        return true;
    }

    void rec(int index, vector<vector<string>> &ans, vector<string> &temp, string s){
        if(index == s.length()){
            ans.push_back(temp);
            return;
        }

        for(int i = index; i < s.length(); i++){
            if(isPal(s, index, i)){
                
                temp.push_back(s.substr(index, i + 1 - index));

                rec(i + 1, ans, temp, s);

                temp.pop_back();
            }
        }

    }

    vector<vector<string>> partition(string s) {
        vector<vector<string>> ans;
        vector<string> temp;

        rec(0, ans, temp, s);

        return ans;
    }
};