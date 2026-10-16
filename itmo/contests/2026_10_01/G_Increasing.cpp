#include <iostream>
#include <set>
int main()
{
    int n;
    std::cin >> n;

    for (int i = 0; i < n; ++i) {
        std::set<int> temp;
        int k;
        std::cin >> k;
        for (int j = 0; j < k; ++j) {
            int t;
            std::cin >> t;
            temp.insert(t);
        }
        if (temp.size() < k) {
            std::cout << "NO\n";
        } else {
            std::cout << "YES\n";
        }
    }
    return 0;
}