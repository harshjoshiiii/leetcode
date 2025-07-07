class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        unordered_map<char,int>mpp;
        for(auto it:s){
            mpp[it]++;
        }
        for(auto it:mpp){
            if(it.second%2!=0)
            {
                return false;
            }
        }
    return true;
    }
};