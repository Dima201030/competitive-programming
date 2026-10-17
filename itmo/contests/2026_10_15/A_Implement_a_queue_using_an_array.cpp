#include <iostream>
#include <vector>

int main() {

    std::vector<int> l;

    int coutnIn = 0;

    int t;
    std::cin >> t;

    while (t--) {
        int tempi;
        char tempch;
        std::cin >> tempch;

        if (tempch == '+') {
            std::cin >> tempi;
            l.push_back(tempi);

        } else if (tempch == '-') {
            std::cout << l[coutnIn] << '\n';
            coutnIn++;
        }

    }
    return 0;
}