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
    int ans = 0 ;
    int height(TreeNode* root){
        if(root==NULL) return 0 ;

        int leftHeight = height(root->left);
        int rightHeight = height(root->right);
        if(max(leftHeight,rightHeight)>ans){
            ans = max(leftHeight,rightHeight) ;
        }
        return max(leftHeight,rightHeight) + 1 ;
    }
    int diameterOfBinaryTree(TreeNode* root) {
        if(root==NULL) return 0 ;

        int curDiam = height(root->left) + height(root->right);

        return curDiam;
    }
};