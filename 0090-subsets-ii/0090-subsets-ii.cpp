class Solution {
public:
    vector<vector<int>>ans;
    void solve(int i,vector<int>&nums, vector<int>&temp)
    {
        //base case
        if(i>=nums.size())
        {  
            ans.push_back(temp);
            return;
        }
        //take
        temp.push_back(nums[i]);
        solve(i+1,nums,temp);
        //not take
        temp.pop_back();
         // Skip all duplicates for current level
        while (i + 1 < nums.size() && nums[i] == nums[i + 1])
        {
            i++;
        }
        solve(i+1,nums,temp);
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<int>temp;
        solve(0,nums,temp);
    return ans;
    }
};