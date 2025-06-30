class Solution {
public:
    void solve(int i, int n, vector<int>&nums, vector<int>&temp,int& len)
    {
        //base case
        if(i==n)
        {
            if(!temp.empty())
            {
                int a = *min_element(temp.begin(), temp.end());
                int b = *max_element(temp.begin(), temp.end());
                if(abs(a - b) == 1) {
                    len = max(len, (int)temp.size());
                }
            } 
        return;
        }

        //take
        temp.push_back(nums[i]);
        solve(i+1,n,nums,temp,len);
        //not take
        temp.pop_back();
        solve(i+1,n,nums,temp,len);
    }
    int findLHS(vector<int>& nums) {
    //     int len = 0;
    //     int n = nums.size();
    //     vector<int>temp;
    //     solve(0,n,nums,temp,len);
    
    // return len;
        int n = nums.size();
        int len=0;
        unordered_map<int,int>mpp;
        for(auto it:nums){
            mpp[it]++;
        }
        for(int i=0;i<n;i++)
        {
            int min = nums[i];
            int maxi = nums[i]+1;
            if(mpp.find(maxi)!=mpp.end())
            {
                len = max(len,mpp[min]+mpp[maxi]);
            } 
        }
    return len;
    }
};