class Solution {
public:
    void solve(vector<int>& candidates, int target,vector<vector<int>>&ans , vector<int>&v, int index) {
        // Base case
        if (target == 0) {   
            ans.push_back(v);
            return;
        }
        if (target < 0) {
            return;
        }    

        for (int i = index; i < candidates.size(); i++) {
            // Skip duplicates
            if (i > index && candidates[i] == candidates[i-1]) continue;
        
            v.push_back(candidates[i]);
            solve(candidates, target - candidates[i], ans, v, i+1);
            v.pop_back();
    }
}
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> v;
    
        // Sort candidates to handle duplicates
        sort(candidates.begin(), candidates.end());
    
        solve(candidates, target, ans, v, 0);

    return ans;
    }
};