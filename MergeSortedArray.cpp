#include <vector>
#include <algorithm>
#include <iostream>

class Solution {
public:
    void merge(std::vector<int>& nums1, int m, std::vector<int>& nums2, int n) 
    {
        if (m < nums1.size())
        {
            for (int i = nums1.size(); i > m; i--)
                nums1.pop_back();
        }
        for (int i = 0; i < nums2.size(); i++)
        {
            nums1.insert(nums1.begin() + m + i, nums2[i]);
        }
        sort(nums1.begin(), nums1.end());
    }
};




int main()
{
    std::vector<int> one = {1,2,3,0,0,0};
    std::vector<int> two = {2,5,6};



    // for (int i = 0; i < 6; i+=2)
    //     one.push_back(i);
    // for (int i = 1; i < 4; i++)
    //     two.push_back(i);

    Solution s;
    s.merge(one, 3, two, 3);
    std::cout << "[" ;
    for (int i = 0; i < one.size(); i++)
        std::cout << one.at(i) << " ";
    std::cout << "]" << std::endl;
}


