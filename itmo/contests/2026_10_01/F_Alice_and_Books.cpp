#include <iostream>
#include <algorithm>

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t;
    unsigned n;
    std::cin >> t;

    while (t--) {
        std::cin >> n;

        unsigned long long a[n];

        for (unsigned i = 0; i < n; ++i) {
            unsigned long long temp;
            std::cin >> temp;
            a[i] = temp;
        }

        unsigned long long maxN = 0;
        for (unsigned i = 0; i < n - 1; ++i) {
            maxN = std::max(maxN, a[i]);
        }

        std::cout << maxN + a[n - 1] << '\n';
    }

    return 0;
}