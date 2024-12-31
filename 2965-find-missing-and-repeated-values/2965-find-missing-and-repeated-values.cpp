class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        vector<int>ans;
        for(auto it:grid){
            for(auto st:it)
            {
                ans.push_back(st);
            }
        }
        int n = ans.size();
        unordered_map<int,int>mpp;
        for(auto it:ans){
            mpp[it]++;
        }
        int missing = -1;
        int repeat= -1;
        
        for(int i=1;i<=n;i++)
        {
            if(mpp.find(i)==mpp.end())
            {
                missing=i;
            }
        }
        for(auto it:mpp)
        {
            if(it.second>=2)
            {
                repeat=it.first;
            }
        }
    
    return {repeat,missing};
    }
};