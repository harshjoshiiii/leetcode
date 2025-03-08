class Solution {
public:
    int minimumRecolors(string blocks, int k) {
        int n = blocks.size();
        int len = INT_MAX;
        for(int i=0;i<=n-k;i++)
        {
            int cnt=0;
            for(int j=i;j<i+k;j++)
            {
                if(blocks[j]=='W')
                {
                    cnt++;
                }
            }
            len = min(len,cnt);
        }
    return len;
    }
};