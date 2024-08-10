#include <iostream>

int main()
{
    int n{};
    std::cin >> n;

    int y{};
    int m{};

    for (int i{0}; i < n; ++i)
    {
        int call{};
        std::cin >> call;

        y += (call / 30 + 1) * 10;
        m += (call / 60 + 1) * 15;
    }

    if (y < m) std::cout << "Y " << y << '\n';
    else if (y > m) std::cout << "M " << m << '\n';
    else std::cout << "Y M " << y << '\n';

    return 0;
}
