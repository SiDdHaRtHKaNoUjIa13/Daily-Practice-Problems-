class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        if(str1+str2 != str2+str1){
            return "";
        }

    // Find the GCD of the lengths of str1 and str2
        int gcdLength = gcd(str1.size(),str2.size());
    // Return the prefix of str1 up to gcdLength, which is the largest common divisor string
        return str1.substr(0,gcdLength);




    }
};