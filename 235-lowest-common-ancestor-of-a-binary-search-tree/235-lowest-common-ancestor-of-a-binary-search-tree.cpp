/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(root == NULL){
            return root;
        }
        if(root->val == p->val || root->val == q->val){     //if either value is equal to the root, the the root is the LCA
            return root;
        }
        //look for key in left and right subtree
        TreeNode *leftsubtree = lowestCommonAncestor(root->left, p, q);
        TreeNode *rightsubtree = lowestCommonAncestor(root->right, p, q);
        //if there is a key present in the left and right subtree, then that key is the LCA
        if(leftsubtree != NULL && rightsubtree != NULL){
            return root;
        }
        
        //if one of the tree is NULL then it means the LCA is in the subtree that's not null
        if(leftsubtree != NULL){
            return leftsubtree; 
        }else{
            return rightsubtree;
        }
    }
};