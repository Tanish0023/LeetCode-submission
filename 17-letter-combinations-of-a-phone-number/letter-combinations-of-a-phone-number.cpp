class Solution {
public:
    void rec(int index,
             vector<string> &ans,
             string &temp,
             string &digits,
             vector<string> &mp) {

        if (index == digits.length()) {
            ans.push_back(temp);
            return;
        }

        string letters = mp[digits[index] - '0'];

        for (char ch : letters) {
            temp.push_back(ch);
            rec(index + 1, ans, temp, digits, mp);
            temp.pop_back();
        }
    }

    vector<string> letterCombinations(string digits) {

        if (digits.empty()) return {};

        vector<string> mp = {
            "", "", "abc", "def", "ghi",
            "jkl", "mno", "pqrs", "tuv", "wxyz"
        };

        vector<string> ans;
        string temp;

        rec(0, ans, temp, digits, mp);

        return ans;
    }
};
