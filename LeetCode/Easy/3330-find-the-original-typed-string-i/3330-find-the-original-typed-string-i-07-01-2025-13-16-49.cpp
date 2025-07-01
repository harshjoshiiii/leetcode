class Solution {
public:
    int possibleStringCount(string word) {
        int cnt=1;  // 1 isliye kya pta usne jo likha ho use vhii likhna ho means koi glti nhi ho.
        for(int i=1;i<word.length();i++)
        {
            if(word[i]==word[i-1])
            {
                cnt++;
            }
        }
    return cnt;
    }
};