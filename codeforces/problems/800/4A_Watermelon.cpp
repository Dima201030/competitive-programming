#include <iostream>

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int w;
    std::cin >> w;

    std::cout << (w > 2 && !(w & 1) ? "YES" : "NO") << '\n';

    return 0;
}