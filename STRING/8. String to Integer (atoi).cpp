class Solution {
public:
    int myAtoi(string s) {
        int i = 0;
        long ans = 0;
        int sign = 1;
        while (i < s.length() && s[i] == ' ') {
            i++;
        }
        if (s[i] == '-') {
            sign = -1;
            i++;
        } else if (s[i] == '+') {
            i++;
        }
        while (i < s.size()) {
            char ch = s[i];
            int dig = ch - '0';
            if (ch >= '0' && ch <= '9') {
                ans = ans * 10 + dig;
                if (ans > INT_MAX && sign == 1) {
                    return INT_MAX;
                } else if (ans > INT_MAX && sign == -1) {
                    return INT_MIN;
                }
                i++;
            } else {
                return ans * sign;
            }

            
        }

        return (ans * sign);
    }
};