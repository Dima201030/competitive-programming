#include <iostream>

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    unsigned n, k, winMark = 0, result = 0;

    std::cin >> n >> k;

    for (int i = 0; i < n; ++i) {
        int mark;
        std::cin >> mark;

        if (i + 1 == k) {
            winMark = mark;
        }

        if (mark < winMark && winMark != 0) {
            break;
        } else if (mark > 0){
            ++result;
        }
    }

    std::cout << result;

    return 0;
}