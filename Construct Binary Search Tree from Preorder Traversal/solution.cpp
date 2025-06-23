/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {
public:
    TreeNode* helper(int& i, int upperBound, vector<int> a){
        if(i==a.size() || a[i]>upperBound) return NULL;
        TreeNode* root = new TreeNode(a[i++]);
        root->left = helper(i,root->val,a);
        root->right = helper(i,upperBound,a);

        return root;
    }
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        int i = 0;
        return helper(i,INT_MAX,preorder);
    }
};