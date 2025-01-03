class Solution {
public:
    int waysToSplitArray(vector<int>& nums) {
        int n=nums.size();
        int cnt=0;
        long long totalsum=0;
        for(int i=0;i<n;i++)
        {
            totalsum+=nums[i];
        }
        long long sum=0;
        for(int i=0;i<n-1;i++)
        {
            sum+=nums[i];
            if(sum>=totalsum-sum)
            {
                cnt++;
            }
        }
    return cnt;
    }
};