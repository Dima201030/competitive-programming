#include <iostream>
#include <map>
#include <algorithm>
#include <vector>

int main() {
    std::map<int, int> a;
    std::vector<int> v;


    int t;
    std::cin >> t;

    for (int i = 0; i < t; ++i){
        int n;
        std::cin >> n;
        for (int j = 0; j < n; ++j) {
            int temp;
            std::cin >> temp;
            v.push_back(temp);
            a[temp]++;
        }
        for (const auto& l : a) {
            if (l.second == 1) {
                auto p = std::find(v.begin(), v.end(), l.first);
                std::cout << p - v.begin() + 1 << '\n';
                break;
            }
        }
        v.clear();
        a.clear();
    }

    return 0;
}
