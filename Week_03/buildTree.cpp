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
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        //bao li 
        if(preorder.size() == 0)return NULL;
        vector<int>preleft;
        vector<int>preright;
        vector<int>inleft;
        vector<int>inright;
        int value = preorder[0];
        TreeNode* root = new TreeNode(value);
        int index = 0;
        for(int i = 0;i < inorder.size();i++)
        {
            if(inorder[i] == value) 
            {
                index = i;
                break;
            }
            inleft.push_back(inorder[i]);
        }
        for(int i = index+1;i<inorder.size();i++){
            inright.push_back(inorder[i]);
        }
        for(int k = 1;k<preorder.size();k++){
            if(k <= inleft.size()){
                preleft.push_back(preorder[k]);
            }else{
                preright.push_back(preorder[k]);
            }
        }
        root->left = buildTree(preleft,inleft);
        root->right = buildTree(preright,inright);
        return root;
    }
};