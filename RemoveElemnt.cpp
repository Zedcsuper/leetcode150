#include <vector>
#include <algorithm>
#include <iostream>

class Solution {
public:
    int removeElement(std::vector<int>& nums, int val) 
    {
        int n = 0;
        std::vector<int>::iterator it;
       for (it = nums.begin(); it != nums.end();)
        {
            if (*it == val)
            {
                n++;
                it = nums.erase(it);
            }
            else
                it++;
        }
        return n;
    }
};


// int main()
// {
//     std::vector<int> vec = {0,1,2,2,3,0,4,2};

//     Solution s;
//     std::cout << s.removeElement(vec, 2) << std::endl;
//     std::vector<int>::iterator it;
//     for (it = vec.begin(); it != vec.end(); it++)
//         std::cout << *it << " " ;
//     std::cout <<std::endl;
 

//     return 0;
// }