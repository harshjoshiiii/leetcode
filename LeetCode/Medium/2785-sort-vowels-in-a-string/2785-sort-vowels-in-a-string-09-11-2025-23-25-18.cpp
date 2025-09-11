class Solution {
public:
    unordered_set<char>vowel={'A','E','I','O','U','a','e','i','o','u'};
    string sortVowels(string s) {
        vector<char>temp;
        for(auto it:s){
            if(vowel.find(it)!=vowel.end())
            {
                temp.push_back(it);
            }
        }
        sort(temp.begin(),temp.end());
        int j=0;
        for(int i=0;i<s.length();i++){
            if(vowel.find(s[i])!=vowel.end())
            {
                s[i]=temp[j];
                j++;
            }
        }
    return s;
    }
};