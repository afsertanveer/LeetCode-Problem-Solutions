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
    int height(TreeNode* root){
        if(root==NULL) return 0 ;

        int leftHeight = height(root->left);
        int rightHeight = height(root->right);
        return max(leftHeight,rightHeight) + 1 ;
    }
    int diameterOfBinaryTree(TreeNode* root) {
        if(root==NULL) return 0 ;

        int leftDiam = diameterOfBinaryTree(root->left);
        int rightDiam = diameterOfBinaryTree(root->right);
        int curDiam = height(root->left) + height(root->right);

        return max(curDiam,max(leftDiam,rightDiam));
    }
};