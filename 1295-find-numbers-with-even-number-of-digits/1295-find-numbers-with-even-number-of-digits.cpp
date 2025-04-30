class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int cnt  = 0;
        for(int i=0;i<nums.size();i++){
            //intialize a string
            string stri="";
            //convert the int to string then check string's length.......
            stri = to_string(nums[i]);
            if(stri.size() % 2 == 0){
                cnt++;
            }
        }
    return cnt;
    }
};