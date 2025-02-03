class Solution {
public:
    int checkIn(vector<int>&temp){
        int n = temp.size();
        for(int i=0;i<n-1;i++)
        {
            if(temp[i]>=temp[i+1])
            {
                return false;
            }
        }
    return true;
    }
    int checkDe(vector<int>&temp){
        int n = temp.size();
        for(int i=0;i<n-1;i++)
        {
            if(temp[i]<=temp[i+1])
            {
                return false;
            }
        }
    return true;
    }
    int longestMonotonicSubarray(vector<int>& nums) {
        int len = 0;
        for(int i=0;i<nums.size();i++)
        {
            vector<int> temp; 
            for (int j = i; j < nums.size(); j++) { 
                temp.push_back(nums[j]);
                if (checkIn(temp) || checkDe(temp)) {
                    len = max(len, (int)temp.size());
                }
            }
        } 
    return len;
    }
};