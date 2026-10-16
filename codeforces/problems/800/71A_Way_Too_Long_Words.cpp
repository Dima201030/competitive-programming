#include <iostream>
#include <string>

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int n;
    std::cin >> n;

    std::string word;

    while (n--) {
        std::cin >> word;

        if (word.size() > 10) {
            std::cout << word.front()
            << word.size() - 2
            << word.back()
            << '\n';
        } else
            std::cout << word << '\n';
    }
}