#include <iostream>
#include <vector>
#include <utility>

std::string intToRoman(int num) {
    std::vector<std::pair<int, std::string>> val = {
        {1000, "M"}, {900, "CM"}, {500, "D"}, {400, "CD"},
        {100, "C"}, {90, "XC"}, {50, "L"}, {40, "XL"},
        {10, "X"}, {9, "IX"}, {5, "V"}, {4, "IV"},
        {1, "I"}
    };
    
    std::string roman;
    for (const auto& pair : val) {
        while (num >= pair.first) {
            roman += pair.second;
            num -= pair.first;
        }
    }
    return roman;
}

int main() {
    int number;
    std::cout << "Enter an integer: ";
    std::cin >> number;
    std::cout << "Roman numeral: " << intToRoman(number) << std::endl;
    return 0;
}