class Solution {
public:
    void checkDivisort(int n, vector<int>&temp){
        for(int i=1;i*i<=n;i++)
        {
            if(n%i==0)
            {
                temp.push_back(i);
                if (i!=n/i)
                temp.push_back(n/i);
            }
        }
    }
    int sumFourDivisors(vector<int>& nums) {
        int n = nums.size();
        int sum=0;
        for(int i=0;i<n;i++)
        {
            vector<int>temp;
            checkDivisort(nums[i],temp);
            if(temp.size()==4)
            {
                for(auto it:temp){
                    sum+=it;
                }
            }
        }
    return sum;
    }
};