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
        vector<vector<int>> result;
        if(root==NULL) return result;
        queue<TreeNode*> nodes;
        nodes.push(root);
        bool lefttoright = true;
        while(!nodes.empty()){
            int n = nodes.size();
             vector<int> ans(n);
             for(int i = 0;i<n;i++){
                   TreeNode* node = nodes.front();
                   nodes.pop();
                   int index = lefttoright?i:n-1-i;
                   ans[index] = node->val;
                   if(node->left) nodes.push(node->left);
                   if(node->right) nodes.push(node->right);
             }
             lefttoright = !lefttoright;
             result.push_back(ans);
        }
        return result;
    }
};