class Solution {
public:
    int countPrefixSuffixPairs(vector<string>& words) {
        int n=words.size();
        int cnt=0;
        for(int i = 0; i < n-1; i++) {
            for(int j = i+1; j < n; j++) {
            string first = words[i];
            int n = first.length();
            string second = words[j];
            int m = second.length();

            if(n<=m){
                string sub1 = second.substr(0,n);
                string sub2 = second.substr(m-n,m);
                if(first==sub1 && first==sub2)
                {
                    cnt++;
                }
            }
        }
    }
    return cnt;
    }
};