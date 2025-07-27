class Solution {
public:
    int countHillValley(vector<int>& nums) {
        int cnt=0;
        int j=0;
        for(int i=1;i<nums.size()-1;i++){
            if(nums[i]>nums[j] && nums[i]>nums[i+1] || nums[i]<nums[j] && nums[i]<nums[i+1])
            {
                cnt++;
                j=i;
            }
        }
    return cnt;
    }
};