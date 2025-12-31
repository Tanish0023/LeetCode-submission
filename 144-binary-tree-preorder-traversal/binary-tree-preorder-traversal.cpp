class Solution {
public:
    void helper(TreeNode* root, vector<int>& v) {
        if (root == nullptr) return;

        v.push_back(root->val);
        helper(root->left, v);
        helper(root->right, v);
    }

    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> v;
        helper(root, v);
        return v;
    }
};
