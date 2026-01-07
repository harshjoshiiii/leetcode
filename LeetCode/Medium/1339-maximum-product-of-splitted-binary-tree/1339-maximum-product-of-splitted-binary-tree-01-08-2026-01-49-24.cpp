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
    int findTotal(TreeNode* root){
        if(!root)   return 0;

        int left = findTotal(root->left);
        int right = findTotal(root->right);

        int sum = root->val + left + right;
    
    return sum;
    }
    int totalSum=0;
    long long maxSum=0;

    int findSplit(TreeNode* root){
        if(!root)   return 0;

        int left = findSplit(root->left);
        int right = findSplit(root->right);

        int s1 = root->val + left + right;

        int s2 = totalSum - s1;

        maxSum = max(maxSum, (long long)s1*s2);

    return s1;
    }
    int maxProduct(TreeNode* root) {
        totalSum = findTotal(root);
        findSplit(root);

    return maxSum % 1000000007;
    }
};