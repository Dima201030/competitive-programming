#include <set>
#include <iostream>

int main()
{
    std::set<int> setA, setB, result;
    int n;
    std::cin >> n;

    for (int i = 0; i < n; ++i) {
        int temp;
        std::cin >> temp;
        setA.insert(temp);
    }

    std::cin >> n;

    for (int i = 0; i < n; ++i) {
        int temp;
        std::cin >> temp;
        setB.insert(temp);
    }

    for (int i : setA) {
        if (setB.find(i) == setB.end()) {
            result.insert(i);
        }
    }

    for (int i : setB) {
        if (setA.find(i) == setA.end()) {
            result.insert(i);
        }
    }
    std::cout << result.size() << std::endl;

    for (int i : result) {
        std::cout << i << ' ';
    }

    std::cout << std::endl;

    return 0;
}