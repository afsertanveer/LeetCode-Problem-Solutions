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
    bool isSame(TreeNode* p, TreeNode* q){
        if(p==NULL || q==NULL){
            return p==q ;
        }
        bool c = isSame(p->left,q->left);
        bool d = isSame(p->right,q->right);
        
        return c && d && p->val==q->val ;
    }
    bool isSubtree(TreeNode* p, TreeNode* q) {
        if(p==NULL || q==NULL){
            return p==q;
        }
        if(p->val == q->val && isSame(p,q)){
            return true ;
        }
        bool a = isSubtree(p->left,q);
        if(a) return true;
        bool b = isSubtree(p->right,q);
        
        return b;
    }
};