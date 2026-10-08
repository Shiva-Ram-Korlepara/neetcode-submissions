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
    int rangeSumBST(TreeNode* root, int low, int high) {
        int result = 0;
        dfs(root, low, high, result);
        return result;
    }

    void dfs(TreeNode *node, int l, int h, int &r) {
        if (node->val >= l && node->val <= h) r+= node->val;
        if (node->left) dfs(node->left, l, h, r);
        if (node-> right) dfs(node->right, l, h, r);
    }
};