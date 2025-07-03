class Solution {
public:
    char kthCharacter(int k) {
        string word="a";

        while(word.length()<k)
        {
            string next="";
            for(char c:word)
            {
                next += (char)(((c-'a' +1)%26)+'a');
            }
            word+=next;
        }
    return word[k-1];
    }
};