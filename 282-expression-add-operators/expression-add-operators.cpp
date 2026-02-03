class Solution {
public:
    void rec(int index,
             string& num,
             int target,
             long eval,
             long prev,
             string temp,
             vector<string>& ans) {

        if (index == num.size()) {
            if (eval == target)
                ans.push_back(temp);
            return;
        }

        for (int i = index; i < num.size(); i++) {
            string curStr = num.substr(index, i - index + 1);
            if (curStr.size() > 1 && curStr[0] == '0') break;

            long cur = stol(curStr);

            if (index == 0) {
                rec(i + 1, num, target, cur, cur, curStr, ans);
            } else {
                rec(i + 1, num, target,
                    eval + cur, cur,
                    temp + "+" + curStr, ans);

                rec(i + 1, num, target,
                    eval - cur, -cur,
                    temp + "-" + curStr, ans);

                rec(i + 1, num, target,
                    eval - prev + prev * cur,
                    prev * cur,
                    temp + "*" + curStr, ans);
            }
        }
    }

    vector<string> addOperators(string num, int target) {
        vector<string> ans;
        rec(0, num, target, 0, 0, "", ans);
        return ans;
    }
};
