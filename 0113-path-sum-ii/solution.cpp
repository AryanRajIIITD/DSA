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
    void p(TreeNode* root,int t,vector<vector<int>>&res,vector<int>&d,int sum){
        if(root==nullptr) return;
        d.push_back(root->val);
        sum+=root->val;
        if(root->left==nullptr && root->right==nullptr){
            if(sum==t){
                res.push_back(d);
            }
        } else {
            p(root->left,t,res,d,sum);
            p(root->right,t,res,d,sum);
        }
        d.pop_back();
    }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<vector<int>> res;
        vector<int> d;
        int sum=0;
        p(root,targetSum,res,d,sum);
        return res;
    }
};
