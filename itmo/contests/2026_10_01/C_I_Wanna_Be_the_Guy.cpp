#include <set>
#include <iostream>

int main()
{
    std::set<int> setA;
    int n, tempI;
    std::cin >> n;
    std::cin >> tempI;
    for (int i = 0; i < tempI; ++i) {
        int temp;
        std::cin >> temp;
        setA.insert(temp);
    }
    std::cin >> tempI;
    for (int i = 0; i < tempI; ++i) {
        int temp;
        std::cin >> temp;
        setA.insert(temp);
    }

    for (int i = 1; i <= n; ++i) {
        if (setA.find(i) == setA.end()) {
            std::cout << "Oh, my keyboard!" << std::endl;
            return 0;
        }
    }

    std::cout << "I become the guy." << std::endl;

    return 0;
}