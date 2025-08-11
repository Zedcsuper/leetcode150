#include <vector>
#include <algorithm>
#include <iostream>


class Solution {
public:
    int removeDuplicates(std::vector<int>& nums) {
        if (nums.size() <= 2) return nums.size(); // Allow up to 2 duplicates

        int write = 2; // Start writing from index 2
        for (int read = 2; read < (int)nums.size(); ++read) {
            if (nums[read] != nums[write - 2]) {
                nums[write] = nums[read];
                write++;
            }
        }

        nums.resize(write); // Remove extra elements in one go
        return write;
    }
};


// class Solution {
// public:
//     int removeDuplicates(std::vector<int>& nums) {
//         int n = 0;
//         int x = 0;
//         std::vector<int>::iterator it;
//        for (it = nums.begin(); it != nums.end();)
//         {
//             x = 0;
//             if (*it == *(it + 1))
//             {
//                 it++;
//                 if (it != nums.end() && it + 1 != nums.end() &&  *it == *(it + 1))
//                 {
//                     x = *it;
//                     it++;
//                     while ( it != nums.end()  && *it == x)
//                     {
//                         it = nums.erase(it);
//                     }
//                 }
//             }
            
//             else
//                 it++;
//         }
//         return nums.size();
//     }
// };



int main()
{
    std::vector<int> vec = {0,1,2,2,3,0,4,2};

    Solution s;
    std::cout << s.removeDuplicates(vec) << std::endl;
    std::vector<int>::iterator it;
    for (it = vec.begin(); it != vec.end(); it++)
        std::cout << *it << " " ;
    std::cout <<std::endl;

    return 0;
}