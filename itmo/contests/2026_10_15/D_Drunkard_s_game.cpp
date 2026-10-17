#include <iostream>
#include <queue>

int main() {
    std::queue<int> l1, l2;

    int t, trys = 0;
    std::cin >> t;

    for (int i = 0; i < t / 2; ++i) {
        int temp;
        std::cin >> temp;
        l1.push(temp);
    }

    for (int i = 0; i < t / 2; ++i) {
        int temp;
        std::cin >> temp;
        l2.push(temp);
    }

    while (!l1.empty() && !l2.empty() && trys < 200000) {
        trys++;

        int x1 = l1.front();
        int x2 = l2.front();

        l1.pop();
        l2.pop();

        if (x1 == 0 && x2 == t - 1) {
            l1.push(x1);
            l1.push(x2);
        } else if (x2 == 0 && x1 == t - 1) {
            l2.push(x1);
            l2.push(x2);
        } else if (x1 > x2) {
            l1.push(x1);
            l1.push(x2);
        } else {
            l2.push(x1);
            l2.push(x2);
        }
    }

    if (l1.empty()) {
        std::cout << "second " << trys << '\n';
    } else if (l2.empty()) {
        std::cout << "first " << trys << '\n';
    } else {
        std::cout << "draw\n";
    }

    return 0;
}