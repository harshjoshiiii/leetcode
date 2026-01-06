class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0) return false;
        string str = to_string(x);
        int i=0,j=str.size()-1;
        while(i<j){
            if(str[i]!=str[j])
            {
                return 0;
            }
            i++;
            j--;
        }
    return 1;
    }
};