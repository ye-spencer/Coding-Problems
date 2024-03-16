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
    bool isValidBST(TreeNode* root)
    {
        return inRange(root, (long)INT_MIN - 1, (long)INT_MAX + 1);
    }
    bool inRange(TreeNode * root, long long min_allowed, long long max_allowed)
    {
        if (!root) return true;

        int value = root->val;

        if (value < max_allowed && value > min_allowed)
        {
            return inRange(root->left, min_allowed, value) && inRange(root->right, value, max_allowed);
        }
        return false;
    }

};