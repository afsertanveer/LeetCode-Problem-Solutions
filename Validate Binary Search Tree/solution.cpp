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
    bool validify(TreeNode* root, TreeNode* maxLimit,TreeNode* minLimit){
       if(root==NULL){
        return true ;
       }
        if( minLimit!=NULL && root->val <= minLimit->val ){
            return false;
        }
        if(maxLimit!=NULL && root->val >= maxLimit->val ){
            return false ;
        }
        return (validify(root->left,root,minLimit) && validify(root->right,maxLimit,root) );
    }
    bool isValidBST(TreeNode* root) {
       return validify(root,NULL,NULL);
    }
};