#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool canJump(const vector<int>& nums) {
    int mx = 0;
    for (int i = 0; i < nums.size(); ++i) {
        if (mx < i) {
            return false;
        }
        mx = max(mx, i + nums[i]);
    }
    return true;
}

int main() {
    vector<int> nums = {2, 3, 1, 1, 4}; // Example input
    if (canJump(nums)) {
        cout << "You can reach the end of the array!" << endl;
    } else {
        cout << "You cannot reach the end of the array." << endl;
    }
    return 0;
}
