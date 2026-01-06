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
    int maxLevelSum(TreeNode* root) {
        int ans=0;
        int level=0;
        queue<TreeNode*>q;
        q.push(root);
        int maxi=INT_MIN;
        while(!q.empty())
        {
            level++;
            int size=q.size();
            int sum=0;
            for(int i=0;i<size;i++)
            {
                auto node = q.front();
                q.pop();
                sum+=node->val;
                if(node->left)  q.push(node->left);
                if(node->right)  q.push(node->right);
            }
            if(maxi<sum){
                maxi=sum;
                ans=level;
            }
        }
    return ans;
    }
};