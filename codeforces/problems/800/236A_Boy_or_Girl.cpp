#include <iostream>
#include <string>
#include <set>

int main() {
    std::string s;
    std::cin >> s;

    std::set<char> words;

    for (int i = 0; i < s.size(); ++i) {
        words.insert(s[i]);
    }

    if (words.size() % 2 == 0) {
        std::cout << "CHAT WITH HER!\n";
    } else {
        std::cout << "IGNORE HIM!\n";
    }
    return 0;
}