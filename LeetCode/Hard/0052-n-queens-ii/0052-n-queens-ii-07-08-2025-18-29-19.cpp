class Solution {
public:
    int isSafe(int row,int col,vector<vector<char>>&board,int n)
    {
        //check row in back
        int i=row;
        int j=col;
        while(j>=0){
            if(board[i][j]=='Q')
            {
                return false;
            }
            j--;
        }
        //check upper left diaglnol 
        i = row;
        j = col;
        while(i>=0 && j>=0 ) {
            if(board[i][j] == 'Q'){
            return false;
            }
            i--;
            j--;
        }
        //check bottom left diagnol
        i = row;
        j = col;
        while( i < n && j >=0) {
            if(board[i][j] == 'Q') {
            return false;
            }
            i++;
            j--;
        }

    return true;
    }
    void storeAns(vector<vector<char>>&board,int n,vector<vector<string>>&ans)
    {
         vector<string> temp;
        for(int i=0; i<n; i++) {
            string output = "";
            for(int j=0; j<n ;j++) {
                output.push_back(board[i][j]);
            }
            temp.push_back(output);
        }
        ans.push_back(temp);
    }
    void solve(vector<vector<char>>&board,int col,int n,vector<vector<string>>&ans)
    {
        if(col>=n)
        {
            storeAns(board,n,ans);
            return;
        }
        // 1 case solbe krna baki recursion will take care
        for(int row=0;row<n;row++)
        {
            //rakho do if it is safe
            if(isSafe(row,col,board,n))
            {
                board[row][col]='Q';
                //aage ki recursion call mardi.
                solve(board,col+1,n,ans);
                //backtracking
                board[row][col]='.';
            }
        }
    }
    int totalNQueens(int n) {
        //phle empty kind of board bna liya
        vector<vector<char>>board(n,vector<char>(n,'.'));
        vector<vector<string>>ans;
        //hm column wise QUEEN place krenge.
        int col=0;
        solve(board,col,n,ans);
    return ans.size();
    }
};