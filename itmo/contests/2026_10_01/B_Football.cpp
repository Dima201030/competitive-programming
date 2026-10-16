#include <vector>
#include <iostream>

int main() {
    std::vector<int> arr;
    std::string temp;

    std::cin >> temp;

    int tempCountE = 0, tempCountZ = 0;
    for (char ch : temp) {
        if (ch == '1' && tempCountZ == 0) {
            tempCountE++;
        } else if (ch == '1' && tempCountE == 0){
            tempCountZ = 0;
            tempCountE++;
        } else if (ch == '0' && tempCountE == 0) {
            tempCountZ++;

        } else if (ch == '0' && tempCountZ == 0){
            tempCountE = 0;
            tempCountZ++;
        }
        if (tempCountE >= 7 || tempCountZ >= 7) {
            std::cout << "YES" << std::endl;
            return 0;
        }
    }

    std::cout << "NO" << std::endl;

    return 0;
}
