#include <iostream>
#include <string>

int main()
{
    std::string hexInput{};
    std::cin >> hexInput;

    int value{std::stoi(hexInput, nullptr, 16)};
    std::cout << value << '\n';

    return 0;
}
