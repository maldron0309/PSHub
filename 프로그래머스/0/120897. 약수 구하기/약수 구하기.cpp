#include <string>
#include <vector>
#include <algorithm>

std::vector<int> solution(int n)
{
    std::vector<int> answer;
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            answer.push_back(i);
        }
    }
    
    std::sort(answer.begin(), answer.end());        
    return answer;
}