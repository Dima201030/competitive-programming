#include <iostream>
#include <deque>

int main() {

    int n;
    std::cin >> n;

    std::deque<int> q1, q2;

    while (n--) {
        char cmd;
        std::cin >> cmd;

        if (cmd == '+') {
            int num;
            std::cin >> num;
            q2.push_back(num);
        } else if (cmd == '*') {
            int num;
            std::cin >> num;
            q1.push_back(num);
        } else {
            std::cout << q1.front() << '\n';
            q1.pop_front();
        }

        if (q1.size() < q2.size()) {
            q1.push_back(q2.front());
            q2.pop_front();
        } else if (q1.size() - q2.size() > 1) {
            q2.push_front(q1.back());
            q1.pop_back();
        }
    }


    return 0;
}