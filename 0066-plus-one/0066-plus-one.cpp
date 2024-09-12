class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        for (int i = digits.size() - 1; i >= 0; --i) {
            if (digits[i] < 9) {
                digits[i]++;
                return digits;
            }
            digits[i] = 0;
        }
        
        // If we reach this point, all digits were 9 and are now 0, so we need to add a 1 at the start
        vector<int> result(digits.size() + 1, 0);
        result[0] = 1;
        return result;
    }
};