class Solution {
public:
    string largestGoodInteger(string num) {
        int n = num.length();
        string ans="";
        for(int i=0;i<=n-3;i++)
        {
            if(num[i]==num[i+1] && num[i]==num[i+2])
            {
                string triple=num.substr(i,3);
                if (triple>ans) {
                    ans=triple;
                }
            }
        }
    return ans;
    }
};