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
    int widthOfBinaryTree(TreeNode* root) {
        queue<pair<TreeNode*, unsigned long long>>q;
        q.push({root,0});
        int maxWidth = 0 ; 
        while(q.size()>0){
            int curLevel = q.size();
            unsigned long long stIdx = q.front().second;
            unsigned long long endIdx = q.back().second;

            maxWidth = max(maxWidth,(int)(endIdx-stIdx+1));
            for(int i = 0 ; i<curLevel ; i++ ){
                auto cur = q.front();
                q.pop();
                if(cur.first->left){
                    q.push({cur.first->left,cur.second*2+1});
                }
                if(cur.first->right){
                    q.push({cur.first->right,cur.second*2+2});
                }
            }
        }
        return maxWidth;
    }
};