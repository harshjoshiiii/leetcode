class Solution {
public:
    int minimumDifference(vector<int>& nums, int k) {
        if (k == 1) return 0;
        sort(nums.begin(),nums.end());
        int mini=INT_MAX;
        for(int i=0;i<=nums.size()-k;i++)
        {
            auto mn =*min_element(nums.begin()+i,nums.begin()+i+k);
            auto mx =*max_element(nums.begin()+i,nums.begin()+i+k);
        mini = min(mini, abs(mx - mn));    
        }
    return mini;
    }
};