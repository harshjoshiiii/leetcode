class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& mat) {
        vector<int>ans;
        int n = mat.size();
        int m = mat[0].size();
        map<int,vector<int>>mpp;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                mpp[i+j].push_back(mat[i][j]);
            }
        }
        bool flag=true;
        for(auto& it:mpp)
        {
            if(flag)
            {
                reverse(it.second.begin(),it.second.end());
            }
            for(auto i:it.second)
            {
                ans.push_back(i);
            }
            flag=!flag;
        }
    return ans;
    }
};