#include <iostream>
#include <stack>

int main() {

    std::stack<int> st1, st2;

    int t;
    std::cin >> t;

    while (t--) {
        int tempi;
        char tempch;
        std::cin >> tempch;

        if (tempch == '+') {
            std::cin >> tempi;
            st1.push(tempi);

        } else if (tempch == '-') {
            if (st2.empty()) {
                while (!st1.empty()) {
                    st2.push(st1.top());
                    st1.pop();
                }
            }
            std::cout << st2.top() << '\n';
            st2.pop();
        }

    }



    return 0;
}