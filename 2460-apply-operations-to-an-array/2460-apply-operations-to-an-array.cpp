class Solution {
public:
    vector<int> applyOperations(vector<int>& nums) {
        int n = nums.size();
        for(int i=0;i<n-1;i++)
        {
            if(nums[i]==nums[i+1])
            {
                nums[i]=nums[i]*2;
                nums[i+1]=0;
            }
            else{
                continue;
            }
        } 
        vector<int>ans;
        for(int i=0;i<n;i++)
        {
            if(nums[i]>0){
                ans.push_back(nums[i]);
            }
        }
        if(ans.size()==n)
        {
            return ans;
        }
        else{
            int m = n-ans.size();
            while(m){
                ans.push_back(0);
                m--;
            }   
        }
    return ans;
    }
};