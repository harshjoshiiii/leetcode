class Solution {
public:
    bool check(int src, int des,vector<int>nums)
    {
        unordered_map<int,int>mpp;
        for(int i=src;i<des;i++)
        {
            mpp[nums[i]]++;
        }
        for(auto it:mpp)
        {
            if(it.second>1)
            {
                return false;
            }
        }
    return true;
    }
    int minimumOperations(vector<int>& nums) {
        int cnt=0;
        int i=0, n=nums.size();
        while(i<n)
        {
            bool ans = check(i,n,nums);
            if(ans==false)
            {
                cnt++;
                i=i+3;
            }
            else{
                break;
            }
        }
    return cnt;
    }
};