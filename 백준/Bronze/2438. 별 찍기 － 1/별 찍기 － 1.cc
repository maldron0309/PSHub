#include <iostream>

int main()
{
    int a{};
    std::cin >> a;

    for (int i{1}; i <= a; ++i)
    {
        for (int j{1}; j <= i; ++j)
            std::cout << '*';
        
        std::cout << '\n';
    }

    return 0;
}
