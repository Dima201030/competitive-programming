#include <iostream>
#include <string>

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int n, result = 0;

    std::cin >> n;

    for (int i = 0; i < n; ++i) {
        std::string line;
        std::cin >> line;

        if (line[1] == '-') {
            result--;
        } else {
            result++;
        }
    }

    std::cout << result;

    return 0;
}