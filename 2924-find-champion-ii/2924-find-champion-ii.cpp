class Solution {
public:
    int findChampion(int n, vector<vector<int>>& edges) {
        vector<int>indegree(n,0);
        for(auto edge:edges){
            int u = edge[0];
            int v = edge[1];
            //NOW U -> V ja rhi hai to u is stronger to v ki indegree bdha do. 
            indegree[v]++;
        }
        int ans=-1;
        int cnt=0;
        for(int i=0;i<n;i++){
            if(indegree[i]==0)
            {
                ans=i;
                cnt++;
            }
            if(cnt>1)
            {
                return -1;
            }
        }
    return ans;
    }
};