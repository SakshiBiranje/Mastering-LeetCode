#include <iostream>
#include <vector>
#include <sstream>

using namespace std;

class Solution 
{
public:
    int removeDuplicates(vector<int>& nums) 
    {
        if (nums.empty()) 
        {
            return 0;
        }

        int k = 1;

        for (int i = 1; i < nums.size(); i++) 
        {
            if (nums[i] != nums[k - 1]) 
            {
                nums[k] = nums[i];
                k++;
            }
        }

        return k;
    }
};

int main() 
{
    Solution solution;
    vector<int> nums;
    string input;
    int num;

    cout << "Enter numbers separated by spaces: ";
    getline(cin, input);
    istringstream iss(input);
    while (iss >> num) 
    {
        nums.push_back(num);
    }
    int k = solution.removeDuplicates(nums);

    cout << "Output: " << k << ", nums = [";
    for (int i = 0; i < k; i++) 
    {
        cout << nums[i];
        if (i < k - 1) 
        {
            cout << ", ";
        }
    }
    cout << "]" << endl;

    return 0;
}