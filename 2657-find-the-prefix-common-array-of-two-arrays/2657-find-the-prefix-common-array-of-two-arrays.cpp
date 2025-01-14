class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        vector<int>ans;
        unordered_map<int,int>mpp2;
        for(int i=0;i<A.size();i++){
            mpp2[B[i]]++;
            int cnt=0;
            for(int j=0;j<=i;j++)
            {
                if(mpp2.find(A[j])!=mpp2.end())
                {
                    cnt++;
                }
            }
            ans.push_back(cnt);
        }   
    return ans;
    }
};