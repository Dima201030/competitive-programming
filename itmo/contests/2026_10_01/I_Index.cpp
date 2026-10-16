#include <iostream>
#include <string>
#include <map>
#include <set>

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    unsigned n;
    std::cin >> n;

    std::map<int, std::set<std::string>> pages;

    for (unsigned i = 0; i < n; ++i) {
        std::string word;
        int page;

        std::cin >> word >> page;
        pages[page].insert(std::move(word));
    }

    std::string out;

    for (const auto& [page, words] : pages) {
        out += std::to_string(page);

        for (const auto& word : words) {
            out += ' ' ;
            out += word;
        }
        out += '\n';
    }

    std::cout << out;
    return 0;
}