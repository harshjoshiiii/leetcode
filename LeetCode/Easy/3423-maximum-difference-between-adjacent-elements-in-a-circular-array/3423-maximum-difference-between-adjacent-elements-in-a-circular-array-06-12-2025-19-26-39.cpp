class Solution {
public:
    int maxAdjacentDistance(vector<int>& nums) {
        int maxi=INT_MIN;
        int n = nums.size();
        for(int i=0;i<nums.size()-1;i++)
        {
            int a = abs(nums[i]-nums[i+1]);
            maxi=max(maxi,a);
        }
        maxi=max(maxi,abs(nums[n-1]-nums[0]));
    
    return maxi; 
    }
};