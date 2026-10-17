#include <iostream>
#include <stack>
#include <string>

int main() {
    std::stack<int> r;

    std::string line;

    std::getline(std::cin, line);

    int right, left;

    for (int i = 0; i < line.size(); i += 2) {
        switch (line[i]) {
        case '+':
            left = r.top();
            r.pop();
            right = r.top();
            r.pop();
            r.push(right + left);
            break;
        case '-':
            left = r.top();
            r.pop();
            right = r.top();
            r.pop();
            r.push(right - left);
            break;
        case '*':
            left = r.top();
            r.pop();
            right = r.top();
            r.pop();
            r.push(right * left);
            break;
        default:
            r.push(line[i] - '0');
        }
    }

    std::cout << r.top() << '\n';

    return 0;
}
