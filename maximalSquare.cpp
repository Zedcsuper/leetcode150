#include <algorithm>
#include <vector>
#include <iostream>
using namespace std;

//Given an m x n binary matrix filled with 0's and 1's, find the largest square containing only 1's and return its area.
class Solution {
public:
    int maximalSquare(vector<vector<char>>& matrix) {

        std::vector<std::vector<int>> dp(matrix.size(), std::vector<int>(matrix[0].size(), 0));
        int maxSize = 0;
        for (int i = 0; i < matrix.size(); i++)
        {
            for (int j = 0; j < matrix[0].size(); j++)
            {
                if (matrix[i][j] == '0')
                    continue;
                else if (i == 0 || j == 0)
                    dp[i][j] = 1;
                else
                    dp[i][j] = min({dp[i-1][j-1] , dp[i][j-1] , dp[i-1][j]}) + 1;
                maxSize = max(maxSize, dp[i][j]);
            }
        }
        return maxSize * maxSize;
    }
};

int main()
{
    vector<vector<char>> matrix = {{'1','1','1','1','0'},{'1','1','1','1','0'},{'1','1','1','1','1'},{'1','1','1','1','1'},{'0','0','1','1','1'}};
    Solution s;

    cout << s.maximalSquare(matrix) << endl;
    return 0;
}
