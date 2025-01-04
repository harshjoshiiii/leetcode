class Solution {
public:
    int countPalindromicSubsequence(string s) {
        int n = s.length();
        unordered_set<char>st;
        for(auto it:s)  st.insert(it);
        int ans=0;
        for(auto it:st)
        {
            int leftInd = -1;
            int rightInd = -1;
            for(int i=0;i<n;i++)
            {
                if(s[i] == it)
                {   
                    if(leftInd==-1)
                    {
                        leftInd = i;    
                    }
                    rightInd = i;
                }
            }
            unordered_set<char>stt;
            for(int mid = leftInd+1;mid<=rightInd-1;mid++)
            {
                stt.insert(s[mid]);
            }
            ans+=stt.size();
        }
    return ans;
    }
};