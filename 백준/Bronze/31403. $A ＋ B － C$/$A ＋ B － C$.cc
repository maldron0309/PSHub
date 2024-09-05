#include <iostream>
#include <string>

int main()
{
    int a{}, b{}, c{};
    std::cin >> a >> b >> c;

    std::string strA = std::to_string(a);
    std::string strB = std::to_string(b);
    std::string strC = std::to_string(c);
    
    int resultNum = (a + b) - c;
    int resultStr = std::stoi(strA + strB) - std::stoi(strC);

    std::cout << resultNum << '\n' << resultStr;

    return 0;
}
