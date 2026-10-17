#include <iostream>
#include <queue>
#include <algorithm>

int main() {

    std::queue<int> q;

    int n;
    long long k;
    std::cin >> n >> k;

    int maxS = 0;

    while (n--) {
        int s;
        std::cin >> s;

        q.push(s);

        maxS = std::max(maxS, s);
    }

    int winner = q.front();
    q.pop();

    long long count = 0;

    while (count < k) {
        int opp = q.front();
        q.pop();

        if (winner > opp) {
            q.push(opp);
            count++;
        } else {
            q.push(winner);
            winner = opp;
            count = 1;
        }

        if (winner == maxS) {
            break;
        }
    }

    std::cout << winner << '\n';

    return 0;
}