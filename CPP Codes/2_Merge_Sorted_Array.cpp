#include <iostream>
#include <vector>

using namespace std;

void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
    int i = m - 1;
    int j = n - 1;
    int k = m + n - 1;
    
    while (i >= 0 && j >= 0) {
        if (nums1[i] > nums2[j]) {
            nums1[k--] = nums1[i--];
        } else {
            nums1[k--] = nums2[j--];
        }
    }
    
    while (j >= 0) {
        nums1[k--] = nums2[j--];
    }
}

int main() {
    int nums1Size, nums2Size;
    
    cout << "Enter the size of nums1: ";
    cin >> nums1Size;
    cout << "Enter the size of nums2: ";
    cin >> nums2Size;
    
    vector<int> nums1(nums1Size);
    vector<int> nums2(nums2Size);
    
    int m, n;
    cout << "Enter the number of elements in nums1 (excluding zeroes): ";
    cin >> m;
    cout << "Enter the elements of nums1: ";
    for (int i = 0; i < m; i++) {
        cin >> nums1[i];
    }
    for (int i = m; i < nums1Size; i++) {
        nums1[i] = 0;
    }
    
    cout << "Enter the number of elements in nums2: ";
    cin >> n;
    cout << "Enter the elements of nums2: ";
    for (int i = 0; i < n; i++) {
        cin >> nums2[i];
    }
    
    merge(nums1, m, nums2, n);
    
    cout << "Merged array: ";
    for (int num : nums1) {
        cout << num << " ";
    }
    cout << endl;
    
    return 0;
}
