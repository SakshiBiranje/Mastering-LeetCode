#include <iostream>
#include <vector>
using namespace std;

class Solution 
{
public:
    int removeElement(vector<int>& nums, int val) 
    {
        int k = 0;
        
        for (int i = 0; i < nums.size(); i++) 
        {
            if (nums[i] != val) 
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
    int n, val;
    
    cout << "Enter the number of elements: ";
    cin >> n;
    
    vector<int> nums(n);
    
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) 
    {
        cin >> nums[i];
    }
    
    cout << "Enter the value to remove: ";
    cin >> val;
    
    Solution solution;
    int newLength = solution.removeElement(nums, val);
    
    cout << "Array after removal: ";
    for (int i = 0; i < newLength; i++) 
    {
        cout << nums[i] << " ";
    }
    cout << endl;
    
    cout << "New length: " << newLength << endl;
    
    return 0;
}