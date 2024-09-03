#include <iostream>
#include <string>

using namespace std;

int sumOfDigits(string num) {
    int sum = 0;
    for (char c : num) {
        sum += c - '0';
    }
    return sum;
}

int getLucky(string s, int k) {
    string num;
    for (char c : s) {
        num += to_string(c - 'a' + 1);
    }

    while (k--) {
        num = to_string(sumOfDigits(num));
    }

    return stoi(num);
}

int main() {
    string s = "zbax";
    int k = 2;
    cout << getLucky(s, k) << endl;  // Output: 8
    return 0;
}