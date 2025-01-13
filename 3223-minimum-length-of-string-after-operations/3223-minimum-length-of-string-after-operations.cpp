class Solution {
public:
    int minimumLength(string s) {
        int cnt=0;
        unordered_map<char,int>mpp;
        for(auto it:s){
            mpp[it]++;
        }
        for(auto it:mpp){
            int a = it.second;
            if(a%2==0)
            {
                cnt+=2;
            }
            else{
                cnt++;
            }
        }
    return cnt;
    }
};