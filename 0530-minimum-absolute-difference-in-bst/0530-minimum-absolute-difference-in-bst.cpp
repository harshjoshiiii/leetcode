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
    void inorder(TreeNode* root, vector<int>&temp)
    {
        if(!root)   return;
        inorder(root->left,temp);
        temp.push_back(root->val);
        inorder(root->right,temp);
    }
    int getMinimumDifference(TreeNode* root) {
        vector<int>temp;
        inorder(root,temp);
        int mini = INT_MAX;

        for(int i=0;i<temp.size()-1;i++)
        {
            mini = min(mini, abs(temp[i] - temp[i + 1]));
        }
    return mini;
    }
};