#include <iostream>

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int n;
    std::cin >> n;

    long long a = 0, b = 0, c = 0, x;
    for (int i = 0; i < n; ++i){
        std::cin >> x; a += x;
    }
    for (int i = 0; i < n - 1; ++i){
        std::cin >> x; b += x;
    }
    for (int i = 0; i < n - 2; ++i){
        std::cin >> x; c += x;
    }

    std::cout << a - b << "\n" << b - c << "\n";
}