#include <iostream>
#include <vector>

class Solution 
{
public:
    int majorityElement(std::vector<int>& nums) 
    {
        int cnt = 0, m = 0;
        for (int& x : nums) 
        {
            if (cnt == 0) 
            {
                m = x;
                cnt = 1;
            }
             else 
             {
                cnt += m == x ? 1 : -1;
            }
        }
        return m;
    }
};

int main() 
{
    Solution solution;
    std::vector<int> nums = {1,2,3,2,5,2,7,8,2,2,9,2}; 
    int result = solution.majorityElement(nums);
    std::cout << "The majority element is: " << result << std::endl;
    return 0;
}
