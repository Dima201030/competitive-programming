#include <iostream>
#include <vector>

// Only int
class MyStack {
public:
    void push(const int& l) {
        a.resize(a.size() + 1);
        a[a.size() - 1] = l;
    }

    int pop(){
        int res = a[a.size() - 1];
        a.resize(a.size() - 1);
        return res;
    }

private:
    std::vector<int> a;

};

int main() {

    int n;
    MyStack a;

    std::cin >> n;

    while (n--) {
        unsigned op;
        std::cin >> op;

        if (op == 1) {
            unsigned temp;
            std::cin >> temp;
            a.push(temp);
        } else {
            std::cout << a.pop() << '\n';
        }
    }

    return 0;
}