class Solution {
public:
    int mincostTickets(vector<int>& days, vector<int>& costs) {
        unordered_set<int>st(begin(days),end(days));

        int last_day = days.back();

        //create dp array
        vector<int>dp(last_day+1,0);

        dp[0]=0;

        for(int i=1;i<=last_day;i++)
        {
            if(st.find(i)==st.end())    //means in nhi 
            {
                dp[i]=dp[i-1];
                continue;
            }

            dp[i] = INT_MAX;

            int day_1_pass  = costs[0] + dp[max(i-1,0)];
            int day_7_pass  = costs[1] + dp[max(i-7,0)];
            int day_30_pass = costs[2] + dp[max(i-30,0)];

            dp[i] = min({day_1_pass,day_7_pass,day_30_pass});
        }

    return dp[last_day]; 
    }
};