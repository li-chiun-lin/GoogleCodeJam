/*

*/

#define _USE_MATH_DEFINES

#include <algorithm>
#include <climits>
#include <cmath>
#include <deque>
#include <iomanip>
#include <iostream>
#include <list>
#include <map>
#include <cmath>
#include <numeric>
#include <queue>
#include <set>
#include <stack>
#include <sstream>
#include <string>
#include <tuple>
#include <unordered_map>
#include <unordered_set>
#include <vector>

using namespace std;

int dfs(int A, int N, vector<int>& M, int i)
{
	if (i == N)
		return 0;

	// absorb and move on
	if (A > M[i])
		return dfs(A + M[i], N, M, i + 1);

	// remove rest motes
	int rm = N - i;

	if (A == 1)
		return rm;

	// add some motes
	int cnt = 0;

	while (A <= M[i])
	{
		A += A - 1;
		++ cnt;
	}

	int ad = dfs(A, N, M, i) + cnt;

	return min(rm, ad);
}

int osmos(int A, int N, vector<int>& M)
{
	sort(begin(M), end(M));

	return dfs(A, N, M, 0);
}

int main()
{
	int T;
	cin >> T;

	for (int t = 1; t <= T; ++t)
	{
		int A, N;
		cin >> A >> N;

		vector<int> M(N);

		for (auto& m : M)
			cin >> m;

		cout << "Case #" << t << ": ";
		cout << osmos(A, N, M) << "\n";
	}

	return 0;
}

