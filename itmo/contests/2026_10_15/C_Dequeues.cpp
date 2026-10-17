#include <iostream>
#include <map>
#include <deque>

int main() {
    std::map<int, std::deque<int>> l;

    int t;
    std::cin >> t;

    while (t--) {
        std::string temp;

        std::cin >> temp;

        if (temp == "pushfront") {
            unsigned iD;
            int num;
            std::cin >> iD >> num;

            if (l.find(iD) == l.end()) {
                l[iD] = std::deque<int>();
            }

            l[iD].push_front(num);
        } else if (temp == "pushback") {
            unsigned iD;
            int num;
            std::cin >> iD >> num;

            if (l.find(iD) == l.end()) {
                l[iD] = std::deque<int>();
            }

            l[iD].push_back(num);
        } else if (temp == "popfront") {
            unsigned iD;
            std::cin >> iD;

            if (l.find(iD) == l.end()) {
                l[iD] = std::deque<int>();
            }

            std::cout << l[iD].front() << '\n';

            l[iD].pop_front();
        } else if (temp == "popback") {
            unsigned iD;
            int num;
            std::cin >> iD;

            if (l.find(iD) == l.end()) {
                l[iD] = std::deque<int>();
            }

            std::cout << l[iD].back() << '\n';

            l[iD].pop_back();
        }
    }

    return 0;
}