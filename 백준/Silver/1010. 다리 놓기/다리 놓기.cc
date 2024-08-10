#include <iostream>
#include <array>
#include <algorithm>

std::array<std::array<int, 30>, 30> memo{};

int Combination(int n, int r) 
{
    if (memo[n][r]) return memo[n][r];

    return memo[n][r] = Combination(n - 1, r - 1) + Combination(n - 1, r);
}

int main()
{
    for (auto& x : memo) std::fill(x.begin(), x.end(), 0);
    for (int i = 0; i < 30; i++) {
        memo[i][0] = memo[i][i] = 1;
    }

    int tcase{}, n{}, r{};
    std::cin >> tcase;

    while (tcase--) {
        std::cin >> r >> n;
        std::cout << Combination(n, r) << '\n';
    }

    return 0;
}
