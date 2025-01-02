class Solution {
public:
    int hammingWeight(int n) {
        // 1st Approach ->Using Modulo and Division
        // {
        // int count = 0;
        // while(n != 0){
        //     count += n % 2;
        //     n = n / 2;
        // }
        // return count;
        // }
        // 2nd Approach -> Using builtin function
        return __builtin_popcount(n);
    }
};