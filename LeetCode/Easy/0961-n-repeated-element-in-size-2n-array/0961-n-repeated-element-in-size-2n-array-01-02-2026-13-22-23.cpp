class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int,int>mpp;
        for(auto it:nums){
            mpp[it]++;
        }
        int repeat;
        for(auto it:mpp){
            if(it.second == n/2)
            {
                repeat=it.first;
            }
        }
    return repeat;
    }
};