class Solution {
public:
    bool isPal(string &s, int l, int r) {
        while (l < r) {
            if (s[l] != s[r]) return false;
            l++;
            r--;
        }
        return true;
    }

    void rec(int index, string &s,
             vector<string> &temp,
             vector<vector<string>> &ans) {

        // ✅ base case
        if (index == s.length()) {
            ans.push_back(temp);
            return;
        }

        // try all substrings starting at index
        for (int i = index; i < s.length(); i++) {

            // check palindrome substring
            if (isPal(s, index, i)) {

                // take substring
                temp.push_back(s.substr(index, i - index + 1));

                // recurse for remaining string
                rec(i + 1, s, temp, ans);

                // backtrack
                temp.pop_back();
            }
        }
    }

    vector<vector<string>> partition(string s) {
        vector<vector<string>> ans;
        vector<string> temp;

        rec(0, s, temp, ans);
        return ans;
    }
};
