#include <string>
#include <vector>

std::vector<int> solution(std::vector<int> numbers)
{
    std::vector<int> answer;
    for (int i = 0; i < numbers.size(); i++)
    {
        int temp = numbers[i] * 2;
        answer.push_back(temp);
    }
    return answer;
}