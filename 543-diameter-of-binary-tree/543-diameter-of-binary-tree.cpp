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
    int diameter;
    int diameterOfBinaryTree(TreeNode* root) {
        diameterOfBinaryTreeHelper(root);
        return diameter;
    }
    int diameterOfBinaryTreeHelper(TreeNode* root){
        if(root == NULL){
            return -1;
        }
        if(root->left == NULL && root->right == NULL){
            return 0;
        }
        int leftval = diameterOfBinaryTreeHelper(root->left);
        int rightval = diameterOfBinaryTreeHelper(root->right);
        diameter = max(diameter, leftval + rightval + 2);
        return max(leftval+1, rightval+1);
    }
};