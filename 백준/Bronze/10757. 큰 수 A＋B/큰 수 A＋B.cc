	#include <iostream>
	#include <vector>
	#include <algorithm>
	using namespace std;

	string add(string A, string B)
	{
		reverse(A.begin(), A.end());
		reverse(B.begin(), B.end());

		string result;
		int carry = 0;
		int sum = 0;

		// 두 문자열 길이 중 긴 것을 기준으로 잡고 연산하기
		for (int i = 0; i < max(A.length(), B.length()); i++) {
			// 현재 자리 두 수와 carry 더한 후 sum에 저장
			sum = carry + (i < A.length() ? A[i] - '0' : 0) + (i < B.length() ? B[i] - '0' : 0);
			// 현재 자리 숫자
			result.push_back(sum % 10 + '0');
			carry = sum / 10;
		}

		if (carry)
			result.push_back(carry + '0');

		reverse(result.begin(), result.end());
		return result;
	}

	int main()
	{
		string A, B;
		cin >> A >> B;
	
		cout << add(A, B) << '\n';

		return 0;
	}