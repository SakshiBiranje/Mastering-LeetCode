#include <iostream>
#include <vector>
#include <algorithm> // for std::max

using namespace std;

class Solution {
public:
    int jump(vector<int>& nums) {
        int ans = 0, mx = 0, last = 0;
        for (int i = 0; i < nums.size() - 1; ++i) {
            mx = max(mx, i + nums[i]);
            if (last == i) {
                ++ans;
                last = mx;
            }
        }
        return ans;
    }
};

int main() {
    Solution sol;
    
    // Example Test Cases
    vector<int> nums1 = {2, 3, 1, 1, 4};
    cout << "Minimum jumps for nums1: " << sol.jump(nums1) << endl; // Output: 2

    vector<int> nums2 = {2, 3, 0, 1, 4};
    cout << "Minimum jumps for nums2: " << sol.jump(nums2) << endl; // Output: 2

    vector<int> nums3 = {1, 2};
    cout << "Minimum jumps for nums3: " << sol.jump(nums3) << endl; // Output: 1

    vector<int> nums4 = {0}; // Special case with only one element
    cout << "Minimum jumps for nums4: " << sol.jump(nums4) << endl; // Output: 0

    return 0;
}
