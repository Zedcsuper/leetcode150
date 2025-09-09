#include <string>
#include <algorithm>
#include <iostream>

using  namespace std;


class Solution {
public:
    string addBinary(string a, string b) {
        if (a.size() < b.size())
        {
            int diff = b.size() - a.size();
            a.insert(0, diff, '0');
        }
        else
        {
            int diff = a.size() - b.size();
            b.insert(0, diff, '0');
        }

        int max = (a.size() > b.size() ? a.size() : b.size());
        std::string res = "";
        int sum = 0;
        int extra = 0;
        for (int i = max - 1; i >= 0; i--)
        {
            int a1 = i < a.size() ? (a[i] - '0') : 0;
            int b1 = (i < b.size()) ? b[i] - '0' : 0;
            sum = a1+ b1 + extra;
            sum > 1 ? (sum -= 2, extra = 1) : extra = 0;
            res += '0' + sum;
        }
        if (extra)
            res += "1";
        std::reverse(res.begin(), res.end());
        return res;
    }
};

int main()
{
    Solution s;
    std::cout << s.addBinary("1010", "1011") << std::endl;
    return 0;
}
