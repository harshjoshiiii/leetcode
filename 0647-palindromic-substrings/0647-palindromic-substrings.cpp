class Solution {
public:
    bool checkPaline(string &s, int i, int j)
    {
        if(i>=j)    return true;

        if(s[i]==s[j])
        {
            return checkPaline(s,i+1,j-1);
        }
    return false;
    }
    int countSubstrings(string s) {
        int n = s.length();
        int cnt=0;

        for(int i=0;i<n;i++)
        {
            for(int j=i;j<n;j++)
            {
                if(checkPaline(s,i,j)==true)
                {
                    cnt++;
                }
            }
        }
    return cnt;
    }
};