class Solution {
public:
    int minimumDistance(vector<int>& nums) {
        // distance formula :  ∣i−j∣+∣j−k∣+∣k−i∣ = |j-i|+|k-j|+|i-k|
        // can we written like this : (j−i)+(k−j)+(k−i)
        //  so formula become : distance = 2*(k-i)
        // brute force worked in first question.
        unordered_map<int, vector<int>> mpp;
        // mpp store : {element,[list of index]}
        for (int i = 0;i<nums.size();i++) {
            mpp[nums[i]].push_back(i);
        }
        int distance = INT_MAX;
        for (auto it:mpp) {
            vector<int>& v = it.second;
            if (v.size() >= 3) {
                for (int i = 0, j = 1, k = 2; k < v.size(); i++, j++, k++) {
                    distance = min(distance, 2 * (v[k] - v[i]));
                }
            }
        }
        return (distance == INT_MAX) ? -1 : distance;
    }
};