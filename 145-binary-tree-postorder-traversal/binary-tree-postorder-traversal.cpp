class Solution {
public:
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> ans;
        if (root == nullptr) return ans;

        stack<TreeNode*> st;
        TreeNode* cur = root;

        while (cur != nullptr || !st.empty()) {
            if (cur != nullptr) {
                st.push(cur);
                cur = cur->left;
            } else {
                TreeNode* temp = st.top()->right;
                if (temp == nullptr) {
                    temp = st.top();
                    st.pop();
                    ans.push_back(temp->val);

                    while (!st.empty() && st.top()->right == temp) {
                        temp = st.top();
                        st.pop();
                        ans.push_back(temp->val);
                    }
                } else {
                    cur = temp;
                }
            }
        }
        return ans;
    }
};
