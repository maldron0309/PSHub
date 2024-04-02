#include <string>
#include <vector>

using namespace std;

int solution(int n, int k) {
    int yangkochiPrice = 12000;
    int drinkPrice = 2000;
    
    int serviceDrinks = n / 10;

    int yangkochiTotal = n * yangkochiPrice;
    int drinksTotal = (k - serviceDrinks) * drinkPrice;

    int answer = yangkochiTotal + drinksTotal;
    return answer;
}
