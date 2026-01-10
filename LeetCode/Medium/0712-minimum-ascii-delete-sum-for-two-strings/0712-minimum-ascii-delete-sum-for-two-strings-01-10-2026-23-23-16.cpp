class Solution {
public:
    int solve(string &s1, string &s2, int i, int j, vector<vector<int>>&dp)
    {
        //base case
        if (i < 0) {  // if s1 is exhausted, delete all remaining characters of s2
        int sum = 0;
        for (int k = 0; k <= j; k++) {
            sum += s2[k];
        }
        return sum;
        }
        if (j < 0) {  // if s2 is exhausted, delete all remaining characters of s1
        int sum = 0;
        for (int k = 0; k <= i; k++) {
            sum += s1[k];
        }
        return sum;
        }

        if(dp[i][j]!=-1)        return dp[i][j];

        //matched
        if(s1[i]==s2[j])
        {
            return  dp[i][j] = solve(s1,s2,i-1,j-1,dp);
        }
        //not match --> then there will be two condition
        int delete_i = s1[i] + solve(s1,s2,i-1,j,dp);
        int delete_j = s2[j] + solve(s1,s2,i,j-1,dp);
    
    return dp[i][j] = min(delete_i,delete_j);
    }
    int minimumDeleteSum(string s1, string s2) {
        int n = s1.size();
        int m = s2.size();
        vector<vector<int>>dp(n,vector<int>(m,-1));
        return solve(s1,s2,n-1,m-1,dp);
    }
};