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

void print(vector<int>& v)
{
	for (auto x : v)
		cout << x << " ";
	cout << "\n";
}

long long dfs(int E, int R, int N, vector<int>& V, int i, int cur, vector<vector<long long>>& dp)
{
	if (i == N)
		return 0;

	if (dp[i][cur] != -1)
		return dp[i][cur];

	long long ret = 0;

	for (int e = 0; e <= cur; ++e)
	{
		long long v = e * V[i] + dfs(E, R, N, V, i + 1, min(E, cur - e + R), dp);
		ret = max(ret, v);
	}

	return dp[i][cur] = ret;
}

long long manage_your_energy(long long E, long long R, int N, vector<int>& V)
{
#if 0
	vector<vector<long long>> dp(N, vector<long long>(E + 1, -1));
	return dfs(E, R, N, V, 0, E, dp);
#endif

	stack<int> sta;
	vector<int> next_best(N, -1);

	for (int i = N - 1; i >= 0; --i)
	{
		while (sta.size() && V[sta.top()] < V[i])
			sta.pop();

		if (sta.size())
			next_best[i] = sta.top();

		sta.push(i);
	}

	long long ret = 0;
	long long e = E;

	for (int i = 0; i < N; ++i)
	{
		if (next_best[i] == -1)
		{
			ret += e * V[i];
			e = min(R, E);
		}
		else
		{
			long long add = (next_best[i] - i) * R;
			long long dif = max(e + add - E, 0LL);
			dif = min(dif, e);
			ret += dif * V[i];
			e = min(e - dif + R, E);
		}
	}

	return ret;
}

int main()
{
	int T;
	cin >> T;

	for (int t = 1; t <= T; ++t)
	{
		int E, R, N;
		cin >> E >> R >> N;

		vector<int> V(N);

		for (auto& v : V)
			cin >> v;

		cout << "Case #" << t << ": ";
		cout << manage_your_energy(E, R, N, V) << "\n";
	}

	return 0;
}

