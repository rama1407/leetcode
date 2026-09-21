/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(p->left==q || p->right==q) return p;
        if(q->left==p || q->right==p) return q;
        if(root->val == p->val) return root;
        if(root->val == q->val) return root;
        while(true){
            if(root!=NULL){
                if(root->left==p && root->right==q){
                   return root;
                }
                else if(root->left==q && root->right==p) return root;
                else if(root->val == p->val) return root;
                if(root->val == q->val) return root;
                else {
                    if(p->val < root->val && q->val<root->val) root= root->left;
                    else if(p->val > root->val && q->val > root->val) root = root->right;
                    else {
                        if(p->val<root->val && q->val > root->val) return root;
                        else if(p->val > root->val && q->val <root->val) return root;
                    }
                }
            }
        }
    }
};