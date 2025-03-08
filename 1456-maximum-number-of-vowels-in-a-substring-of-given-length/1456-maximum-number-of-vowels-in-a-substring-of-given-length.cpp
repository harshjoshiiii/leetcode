class Solution {
public:
    bool checkVowel(char ch){
        ch = tolower(ch);
        return ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u';
    }
    int maxVowels(string s, int k) {
        int n = s.length();
        int len = INT_MIN;
    //     for(int i=0;i<=n-k;i++)
    //     {
    //         int cnt=0;
    //         for(int j=i;j<i+k;j++){
    //             if(checkVowel(s[j]))
    //             {
    //                 cnt++;
    //             }
    //         }
    //         len = max(len,cnt);
    //     }
    // return len;
        int i=0;
        int j=0;
        int cnt=0;
        while(j<n){
            if(checkVowel(s[j]))
            {
                cnt++;
            }
            if(j-i+1==k)
            {
                len = max(len,cnt);
                if(checkVowel(s[i]))       //phle bali window m jitne vowel unhe count se hta do.
                {
                    cnt--;
                }
                i++;
            }
            j++;
        }
    return len;
    }
};