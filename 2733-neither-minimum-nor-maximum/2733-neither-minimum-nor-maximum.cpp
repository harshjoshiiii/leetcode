class Solution {
public:
    int findNonMinOrMax(vector<int>& nums) {
        vector<int>ans;
        set<int>st{nums.begin(),nums.end()};
        if(st.size() < 3)
        {
            return -1;
        }
        for(auto it:st){
            ans.push_back(it);
        }
    return ans[1];
    }
};