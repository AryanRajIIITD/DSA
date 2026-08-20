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
    int s(TreeNode* node,int&sum){
        if(node==nullptr) return 0;
        int lh=max(0,s(node->left,sum));
        int rh=max(0,s(node->right,sum));
        sum=max(sum,lh+rh+node->val);
        return node->val+max(lh,rh);
    }
    int maxPathSum(TreeNode* root) {
        int sum=INT_MIN;
        s(root,sum);
        return sum;
    }
};
