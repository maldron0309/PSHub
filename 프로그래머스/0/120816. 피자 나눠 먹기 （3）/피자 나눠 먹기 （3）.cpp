#include <string>
#include <vector>

using namespace std;

int solution(int slice, int n) {
    int answer = 0;
    int totalPizzaNeeded = n;
    
    int pizzaNeeded = totalPizzaNeeded / slice;
    
    if (totalPizzaNeeded % slice){
        pizzaNeeded++;
    }
    answer = pizzaNeeded;
    
    return answer;
}