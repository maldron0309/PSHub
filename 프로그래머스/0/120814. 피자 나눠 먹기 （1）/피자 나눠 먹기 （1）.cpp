#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int slice = 7;
    int answer = n / slice; 
    if (n % slice != 0) answer++; 
    
    return answer;
}
