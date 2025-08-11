#include <vector>
#include <map>
#include <iostream>

class Solution {
public:
    int majorityElement(std::vector<int>& nums) 
    {
        std::map<int, int> map;
        std::vector<int>::iterator it;
        std::map<int, int>::iterator it1;
        int max = 0;
        int val = 0;

        for (it = nums.begin() ; it != nums.end(); it++)
            map[*it]++;
        for (it1 = map.begin(); it1 != map.end(); it1++)
        {
            if (it1->second > max)
            {
                max = it1->second;
                val = it1->first;
            } 
        }
        return val;
        
    }
};


int main()
{
    Solution s;
    std::vector<int> vec = {1 , 2, 3, 1, 1};
    std::cout <<  s.majorityElement(vec) << std::endl; 
}