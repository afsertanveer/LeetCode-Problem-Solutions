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
    int size(TreeNode* root, int height){
        if(root==NULL) return height;
        int leftSize = size(root->left,height+1);
        int rightSize = size(root->right,height+1);
        return max(leftSize,rightSize);
    }
    int maxDepth(TreeNode* root) {
        return size(root,0);
    }
};