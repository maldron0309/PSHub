#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    std::vector<int> v(9);
    int totalHeight{ 0 };

    for (int i{ 0 }; i < 9; ++i)
    {
        std::cin >> v[i];
        totalHeight += v[i];
    }

    std::sort(v.begin(), v.end());

    int overHeight{ totalHeight - 100 };

    for (int i{ 0 }; i < 8; ++i)
    {
        for (int j{ i + 1 }; j < 9; ++j)
        {
            if (v[i] + v[j] == overHeight)
            {
                v.erase(v.begin() + j);
                v.erase(v.begin() + i);
                for (int k{ 0 }; k < 7; ++k)
                    std::cout << v[k] << '\n';
                return 0;
            }
        }
    }

    return 0;
}
