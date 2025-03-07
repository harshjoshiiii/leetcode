class Solution {
public:
    bool checkForPrime(int n) {
        if (n < 2) return false;
        if (n == 2 || n == 3) return true;
        if (n % 2 == 0 || n % 3 == 0) return false;

        for (int i = 5; i * i <= n; i += 6) {
            if (n % i == 0 || n % (i + 2) == 0)
                return false;
        }
        return true;
    }
    vector<int> closestPrimes(int left, int right) {
        int first = -1, second = -1;
        int mini = INT_MAX;
        vector<int> result = {-1, -1};

        for (int i = left; i <= right; i++) {
            if (checkForPrime(i)) {
                if (first == -1) {
                    first = i;
                }
                else{
                    second = i;
                    if (second - first < mini) {
                        mini = second - first;
                        result = {first, second};
                    }
                    //ab ye bn gya new prime for the next numbers
                    first = second;
                }
            }
        }
    return result;
    }
};