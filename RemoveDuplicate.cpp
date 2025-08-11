#include <vector>
#include <set>

class Solution {
public:
    int removeDuplicates(std::vector<int>& nums) {
        std::set<int> mySet(nums.begin(), nums.end());
        nums.assign(mySet.begin(), mySet.end());
        return nums.size();
    }
};