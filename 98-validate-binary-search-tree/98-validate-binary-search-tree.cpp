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
    bool isValidBSTUtil(TreeNode* root, long int minValue, long int maxValue) {
        if(root == NULL){
            return true;
        }
        if(root->val > minValue && root->val < maxValue && isValidBSTUtil(root->left, minValue, root->val) && isValidBSTUtil(root->right, root->val, maxValue)){
            return true;
        }else{
            return false;
        }
    }
    
    bool isValidBST(TreeNode* root) {
        return isValidBSTUtil(root, LONG_MIN, LONG_MAX);
    }
};