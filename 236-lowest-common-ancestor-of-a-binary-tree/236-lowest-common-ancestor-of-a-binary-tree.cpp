/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
//Space and Time: O(n)
class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        
        if(root==NULL  || root==p || root==q){   // by any chance we reach null we will return null or if any of node then that node will be returned 
            return root;
        }
        TreeNode* left= lowestCommonAncestor(root->left,p,q); 
        TreeNode* right=lowestCommonAncestor(root->right,p,q);     // simply travelling to the left and then right 
        
        if(left==NULL){         // if left appears to be null we will return the right no matter what the value is 
            return right;
        }
        else if(right==NULL){   //if right appears to be null we will return the left no matter what the value is 
            return left;
        }
        else
        {
            return root;     // if both the left and right are not null then we found are answer and we will return it 
        }
    }
};