#include <iostream>

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    unsigned m, n;

    std::cin >> m >> n;

    std::cout << (m*n)/2;

    return 0;
}