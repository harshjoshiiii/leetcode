class Solution {
public:
    int findFinalValue(vector<int>& nums, int original) {
        int ans = original;
        unordered_set<int>mpp(nums.begin(),nums.end());
        while (mpp.find(ans) != mpp.end()) {
            ans*=2; 
        }
    return ans;   
    }
};