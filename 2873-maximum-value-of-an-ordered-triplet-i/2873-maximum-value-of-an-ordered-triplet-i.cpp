class Solution {
public:
    long long maximumTripletValue(vector<int>& nums) {
        long long maxi = LLONG_MIN;
        int n = nums.size();
        for(int i=0;i<n-2;i++){
            for(int j=i+1;j<n;j++)
            {
                for(int k=j+1;k<n;k++)
                {
                    long long ans = (long long)(nums[i] - nums[j]) * nums[k];
                    maxi=max(maxi,ans);
                }
            }
        }
    return (maxi>=0)?maxi:0;
    }
};