#include <iostream>
#include <map>
#include <string>
#include <algorithm>

int main() {
    std::map<std::string, int> w;

    int maxSize = 0;

    std::string word;

    while (std::cin >> word) {
        maxSize = std::max(maxSize, ++w[word]);
    }

    for (const auto& l : w) {
        if (l.second == maxSize) {
            std::cout << l.first << '\n';
            return 0;
        }
    }

    return 0;
}
