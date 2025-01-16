class Solution {
public:
    int xorAllNums(vector<int>& nums1, vector<int>& nums2) {
        //Brute force -> Giving Memory Limit Exceeded
    //     vector<int>nums3;
    //     for(int i=0;i<nums1.size();i++)
    //     {
    //         for(int j=0;j<nums2.size();j++)
    //         {
    //             int a = nums1[i]^nums2[j];
    //             nums3.push_back(a);
    //         }
    //     }
    //     int ans=0;
    //     for(auto it:nums3)
    //     {
    //         ans^=it;
    //     }
    // return ans;

    //Optimize approach -> Sbhi ki frequency nikal do (after pair bali freq.) jese nums1 m jo element hai num2 se pair bnayega to uski frequency num2 ke size ke braber hogi.
    //to jiski frequency even hai bo to zero ho jayega qki xor m same zero ho jate baki odd bale se answer nikal denge.
            int m = nums1.size();
            int n = nums2.size();
            unordered_map<int, long> mp;
            for(int &num : nums1) {
                mp[num] += n;
            }
            for(int &num : nums2) {
                mp[num] += m;
            }
            int result = 0;
            for(auto &it : mp) {
                int num = it.first;
                int freq = it.second;
                if(freq%2 != 0) { //ODD
                    result ^= num;
                }
            }
    return result;
    }
};