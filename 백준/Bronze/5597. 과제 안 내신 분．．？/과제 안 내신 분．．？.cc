#include <iostream>
using namespace std;

int main() {

	bool submit[31] = { 0 }; // 0으로 초기화
	int n;

	while (cin >> n) 
	{
		submit[n] = 1; // 배열의 요소를 1로 설정
	}

	for (int i = 1; i < 31; i++)
	{
		if (submit[i] == 0) // i번째 숫자가 입력되지 않았다면
		{
			cout << i << '\n'; // 해당 숫자가 출력됨
		}
	}
   
	return 0;
}
