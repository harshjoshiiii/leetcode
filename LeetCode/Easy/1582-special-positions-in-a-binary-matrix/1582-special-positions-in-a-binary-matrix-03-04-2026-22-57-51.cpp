class Solution {
public:
    int numSpecial(vector<vector<int>>& mat) {
       int cnt=0;
       int n=mat.size(), m=mat[0].size();
       for(int i=0;i<n;i++)
       {
        for(int j=0;j<m;j++){
            if(mat[i][j]==1)
            {
                bool checkrow=true;
                bool checkcol=true;
                // check row
                for(int k=0;k<m;k++) {
                    if(k!=j && mat[i][k]==1) {
                        checkrow=false;
                        break;
                    }
                }
                // check column
                for(int k=0;k<n;k++) {
                    if(k!=i && mat[k][j]==1) {
                        checkcol = false;
                        break;
                    }
                }
                if(checkrow && checkcol)
                {
                    cnt++;
                }
            }
        }
       }

    return cnt; 
    }
};