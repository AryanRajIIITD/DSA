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
    bool isS(TreeNode* p,TreeNode* q){
        if(p==nullptr || q==nullptr){
            return (p==q);
        }
        return (p->val==q->val)&& isS(p->left,q->right) && isS(p->right,q->left);
    }
    bool isSymmetric(TreeNode* root) {
        return isS(root->left,root->right);
    }
};