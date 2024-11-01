#include <vector>
#include <numeric>

std::vector<int> solution(int numer1, int denom1, int numer2, int denom2) 
{
    int lcm = std::lcm(denom1, denom2);
    int sumNumer = (numer1 * (lcm / denom1)) + (numer2 * (lcm / denom2));
    int gcd = std::gcd(sumNumer, lcm);
    
    sumNumer /= gcd;
    lcm /= gcd;
    
    std::vector<int> answer = {sumNumer, lcm};
    return answer;
}
