class Solution {
public:
    int minimumDistance(vector<int>& nums) {
       //distance formula :  ∣i−j∣+∣j−k∣+∣k−i∣ = |j-i|+|k-j|+|i-k|
       //can we written like this : (j−i)+(k−j)+(k−i)  
       // so formula become : distance = 2*(k-i)
       int distance = INT_MAX;
       for(int i=0;i<nums.size();i++)
       {
            for(int j=i+1;j<nums.size();j++)
            {
                if(nums[i]!=nums[j])    continue;
                for(int k=j+1;k<nums.size();k++)
                {
                    if(nums[j]==nums[k])
                    {
                        distance = min(distance, 2*(k-i));
                    }
                }
            }
       }
    return (distance==INT_MAX)?-1:distance;
    }
};