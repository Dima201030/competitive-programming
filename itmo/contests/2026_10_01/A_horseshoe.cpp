#include <vector>
#include <set>
#include <iostream>

int main()
{
    std::vector<int> arr;
    arr.resize(4);
    std::cin >> arr[0] >> arr[1] >> arr[2] >> arr[3];
    std::set<int> sArr;

    for (int i = 0; i < arr.size(); ++i) {
        sArr.insert(arr[i]);
    }

    std::cout << 4 - sArr.size() << std::endl;

    return 0;
}