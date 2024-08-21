#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    int hIndex(vector<int>& citations) {
        int n = citations.size();
        vector<int> cnt(n + 1, 0);
        for (int x : citations) {
            ++cnt[min(x, n)];
        }
        int s = 0;
        for (int h = n; h >= 0; --h) {
            s += cnt[h];
            if (s >= h) {
                return h;
            }
        }
        return 0;  // In case no valid h-index is found
    }
};

int main() {
    vector<int> citations = {3, 0, 6, 1, 5};
    
    Solution solution;
    int hIndex = solution.hIndex(citations);
    cout << "The H-Index is: " << hIndex << endl;

    return 0;
}
