#include <string>
#include <vector>
#include <algorithm>

int solution(std::vector<int> array)
{
    std::sort(array.begin(), array.end());
    int answer = array[array.size() / 2];
    return answer;
}