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
    bool p(TreeNode* r1, TreeNode* r2){
        if(r1==nullptr && r2==nullptr) return true;
        if(r1==nullptr || r2==nullptr) return false;
        if(r1->val!=r2->val) return false;
        bool a=p(r1->left,r2->right);
        bool b=p(r1->right,r2->left);
        return a && b;
    }
    bool isSymmetric(TreeNode* root) {
        if(root==nullptr) return true;
        return p(root->left,root->right);
    }
};
