#include <iostream>
#include <string>

void down(std::string& line) {
    for (int i = 0; i < line.size(); ++i) {
        if (line[i] < 97) {
            line[i] = (line[i] + 32);
        }
    }
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    std::string line1, line2;

    std::cin >> line1;
    std::cin >> line2;

    down(line1);
    down(line2);

    if (line1 == line2) {
        std::cout << '0' << std::endl;
    }else if (line1 < line2) {
        std::cout << "-1" << std::endl;
    } else {
        std::cout << '1' << std::endl;
    }

    return 0;
}