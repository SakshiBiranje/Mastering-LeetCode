#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution 
{
public:
    void reverseString(vector<char>& s) 
    {
        int left = 0;
        int right = s.size() - 1;
        
        while (left < right) 
        {
            swap(s[left], s[right]);
            left++;
            right--;
        }
    }
};

int main() 
{
    Solution solution;
    vector<char> str = {'h', 'e', 'l', 'l', 'o'};
    solution.reverseString(str);
    
    for (char c : str) 
    {
        cout << c;
    }
    cout << endl;
    
    return 0;
}
