class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int c = 1, n = digits.size();
        for (int i = n - 1; i >= 0 && c; i--) {
            int x = digits[i] + c;
            digits[i] = x % 10;
            c = (x - digits[i]) / 10;
        }
        if (c) digits.insert(digits.begin(), c);
        return digits;
    }
};
