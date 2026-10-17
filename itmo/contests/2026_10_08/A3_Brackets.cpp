#include <iostream>
#include <string>
#include <map>
#include <vector>

int main() {

    std::string n;

    std::cin >> n;

    std::map<char, char> t = {{')', '('}, {']', '['}, {'}', '{'}};

    std::vector<char> st;
    if (n.size() == 1) {
        std::cout << "NO" << '\n';
        return 0;
    }
    for (char ch : n) {

        if (ch == '(' || ch == '[' || ch == '{') {
            st.push_back(ch);
        } else {
            if (!st.empty()) {
                if (st[st.size() - 1] == t[ch]) {
                    st.pop_back();
                } else {
                    std::cout << "NO" << '\n';
                    return 0;
                }
            } else {
                std::cout << "NO" << '\n';
                return 0;
            }
        }
    }
    if (!st.empty()) {
        std::cout << "NO" << '\n';
    } else {
        std::cout << "YES" << '\n';
    }

    return 0;
}