/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */

class Solution {
public:
    int diameterOfBinaryTree(TreeNode* root) {
        int result = 0;
        dfs(root, result);
        return result;
    }

    int dfs(TreeNode *a, int &result) {
        int l = 0, r = 0;
        if (a->left) l = dfs(a->left, result);
        if (a->right) r = dfs(a->right, result);
        result = max(result, l + r);
        return max(l, r) + 1;
    }
};
