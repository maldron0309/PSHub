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

		for (int i = 0; i < max(A.length(), B.length()); i++) 
		{
			sum = carry + (i < A.length() ? A[i] - '0' : 0) + (i < B.length() ? B[i] - '0' : 0);

			result.push_back(sum % 10 + '0');
			carry = sum / 10;
		}

		if (carry) result.push_back(carry + '0');

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