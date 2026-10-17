#include <iostream>
#include <vector>

// Only int
class MyStack {
public:
    void push(const int& l) {
        a.resize(a.size() + 1);
        a[a.size() - 1] = l;
        pA.resize(pA.size() + 1);
        if (pA.size() == 1) {
            pA[pA.size() - 1] = l;
        } else if (pA[pA.size() - 2] > l) {
            pA[pA.size() - 1] = l;
        } else {
            pA[pA.size() - 1] = pA[pA.size() - 2];
        }


    }

    int pop() {
        int res = a[a.size() - 1];
        a.resize(a.size() - 1);
        pA.resize(pA.size() - 1);
        return res;
    }

    int min() {
        return pA[pA.size() - 1];
    }

private:
    std::vector<int> a;

    std::vector<int> pA;


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
        } else if (op == 2){
            a.pop();
        } else if (op == 3) {
            std::cout << a.min() << '\n';
        }

    }



    return 0;
}