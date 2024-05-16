#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> score;
    int sum = 0;

    for (int i = 0; i < 5; i++)
    {
        int temp;
        cin >> temp; 
        score.push_back(temp);

        if (temp < 40) // 40점 미만이면
        {
            sum += 40; // 총점에 40점 추가
        }
        else // 40점 이상이면
        {
            sum += temp; // 총점에 실제 점수 추가
        }
    }

    cout << sum / 5;

    return 0;
}