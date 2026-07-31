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
    void p(TreeNode* node,vector<int>&a){
        if(node==nullptr){
            return;
        }
        a.push_back(node->val);
        p(node->left,a);
        p(node->right,a);
        return;
    }
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int>a;
        p(root,a);
        return a;
    }
};
