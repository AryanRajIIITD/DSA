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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>>res;
        queue<TreeNode*> q;
        if(root==nullptr) return res;
        q.push(root);
        int lr=0;
        while(!q.empty()){
            int l=q.size();
            vector<int> t(l);
            int first=0;
            int last=l-1;
            while(l--){
                TreeNode* n=q.front();
                q.pop();
                if(lr==0){
                    t[first]=n->val;
                    first++;
                } else {
                    t[last]=n->val;
                    last--;
                }
                if(n->left!=nullptr) q.push(n->left);
                if(n->right!=nullptr) q.push(n->right);
                
            }
            res.push_back(t);
            lr=1-lr;
        }
        return res;
    }
};
