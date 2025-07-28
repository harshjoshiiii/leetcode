class Solution {
public:
    vector<vector<int>>result;
    void solve(int i,vector<int>&nums,vector<int>&temp)
    {
        if(i>=nums.size()){
            result.push_back(temp);
            return;
        }
        //Take 
        temp.push_back(nums[i]);
        solve(i+1,nums,temp);
        //Not Take
        temp.pop_back();
        solve(i+1,nums,temp);
    }
    int countMaxOrSubsets(vector<int>& nums) {    
        int n = nums.size();
        int max_sub=0;
        for(int i=0;i<n;i++)
        {
            max_sub = max_sub | nums[i];
        }
        vector<int>temp;
        solve(0,nums,temp); 
        int cnt=0;
        for(auto it:result)
        {
            int sum=0;
            for(int i=0;i<it.size();i++)
            {
                sum = sum | it[i]; 
            }
            if(sum==max_sub)    cnt++;
        }
    return cnt;
    }
};