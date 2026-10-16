#include <iostream>

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    unsigned result = 0;

    for (int i = 1; i <= 5; ++i) {
        for (int j = 1; j <= 5; ++j) {
            unsigned temp;
            std::cin >> temp;
            if (temp == 1) {
                if (i == 3 && j == 3) {
                    break;
                }
                if (i > 3) {
                    result += (i - 3);
                } else {
                    result += (3 - i);
                }
                if (j > 3) {
                    result += (j - 3);
                } else {
                    result += (3 - j);
                }
            }
        }
    }

    std::cout << result;

    return 0;
}