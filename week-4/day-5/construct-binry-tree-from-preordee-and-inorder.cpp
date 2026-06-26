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
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        map<int, int> imp;
        for(int i = 0; i< inorder.size(); i++){
            imp[inorder[i]] = i;
              }
             TreeNode* root =  buildTree(preorder, 0, preorder.size()-1, inorder, 0, inorder.size()-1, imp);
             return root;
      

    }
    TreeNode* buildTree(vector<int>& preorder, int ps, int pe, vector<int>& inorder, int is, int ie, map<int, int>& imp){
        if(ps > pe || is > ie) return NULL;
        TreeNode* root = new TreeNode(preorder[ps]);
        int iroot = imp[root->val];
        int numleft = iroot - is;
        root->left = buildTree(preorder, ps+1, ps+numleft, inorder, is, iroot-1, imp);
        root->right = buildTree(preorder, ps+numleft+1, pe, inorder, iroot+1, ie, imp);
        return root;
    } 
};
