#include <iostream>

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    unsigned n, result = 0;

    std::cin >> n;

    for (int i = 0; i < n; ++i) {
        int l, k, j;
        std::cin >> l >> k >> j;

        if ((l + k + j) >= 2) {
            result++;
        }
    }

    std::cout << result;
}