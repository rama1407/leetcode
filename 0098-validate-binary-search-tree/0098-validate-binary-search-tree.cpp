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
    bool valid(TreeNode* root,long long min,long long max){
        if(root==NULL) return true;
        if(root->val<=min || root->val>=max) return false;
        int val = root->val;
        return valid(root->left,min,val) && valid(root->right,val,max);
    }
    bool isValidBST(TreeNode* root){
            if(root==NULL) return true;
            if(root->left==NULL && root->right==NULL) return true;
            return valid(root,LLONG_MIN,LLONG_MAX);
    }
};