# [Bronze III] 최소, 최대 - 10818 

[문제 링크](https://www.acmicpc.net/problem/10818) 

### 분류

구현, 수학

### 문제 설명

<p>N개의 정수가 주어진다. 이때, 최솟값과 최댓값을 구하는 프로그램을 작성하시오.</p>

### 입력 

 <p>첫째 줄에 정수의 개수 N (1 ≤ N ≤ 1,000,000)이 주어진다. 둘째 줄에는 N개의 정수를 공백으로 구분해서 주어진다. 모든 정수는 -1,000,000보다 크거나 같고, 1,000,000보다 작거나 같은 정수이다.</p>

### 출력 

 <p>첫째 줄에 주어진 정수 N개의 최솟값과 최댓값을 공백으로 구분해 출력한다.</p>



#  🚀  오답노트 

```diff
-#include <iostream>
-#include <algorithm>
-#include <vector>
-using namespace std;
-
-int main()
-{
-	ios_base::sync_with_stdio(false);
-	cin.tie(NULL);
-
-	int n;
-	cin >> n;
-	vector<int> v(n);
-
-	for (int i = 0; i < n; i++)
-	{
-		cin >> v[i];
-	}
-
-	int max = *max_element(v.begin(), v.end());
-	int min = *min_element(v.begin(), v.end());
-
-	cout << min << " " << max;
-
-	return 0;
-}

```


 ## 🏆 전체 코멘트 

