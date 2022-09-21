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
    bool isBalanced(TreeNode* root) {
        if(root == NULL){
            return true;
        }
        int result = dfs(root);
        if(result == -1){
            return false;
        }else{
            return true;
        }
    }
    
    int dfs(TreeNode *node){
        if(node == NULL){
            return 0;
        }
        int left_tree = dfs(node->left) + 1; //add one to include the root
        int right_tree = dfs(node->right) + 1;
        
        if(left_tree == 0 || right_tree == 0 || abs(left_tree - right_tree) > 1){
            return -1;
        }else{
            return max(left_tree,right_tree);
        }
    }
};

