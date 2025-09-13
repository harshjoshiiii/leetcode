class Solution {
public:
    int maxFreqSum(string s) {
        unordered_set<char>st={'a','e','i','o','u'};
        unordered_map<char,int>mpp;
        for(auto it:s){
            mpp[it]++;
        }
        int vowel=0;
        int cons=0;
        for(auto& i:mpp){
            if(st.find(i.first)!=st.end())
            {
                vowel=max(vowel,i.second);
            }
            else{
                cons=max(cons,i.second);
            }
        }

    
    return vowel+cons;
    }
};