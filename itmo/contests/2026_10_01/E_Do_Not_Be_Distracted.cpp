#include <string>
#include <iostream>
#include <set>
int main()
{
    int n;
    std::cin >> n;

    for (int i = 0; i < n; ++i) {
        std::string task;
        int trash, count = 0;
        char tempCh = '0';
        std::set<char> completed;
        bool br = true;

        std::cin >> trash;
        std::cin >> task;

        for (char ch : task) {
            if (completed.find(ch) != completed.end()) {
                std::cout << "NO\n";
                br = false;
                break;
            }
            if (tempCh == '0') {
                tempCh = ch;
                continue;
            }
            if (ch != tempCh) {
                completed.insert(tempCh);
                tempCh = ch;
            }
        }
        if (br) {
            std::cout << "YES\n" << std::endl;
        }
    }
    return 0;
}