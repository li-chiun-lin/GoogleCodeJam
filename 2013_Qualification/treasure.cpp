/*
to be continued.
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

void print(map<int, int>& m)
{
	for (auto& [k, v] : m)
		cout << k << ": " << v << "\n";
	cout << "\n";
}

bool dfs(int N, vector<int>& chest_open_key, vector<vector<int>>& chest_add_key, map<int, int>& key_chain, vector<int>& order, vector<bool>& opened)
{
	if (order.size() == N)
		return true;

	for (int i = 1; i <= N; ++i)
	{
		if (opened[i])
			continue;

		if (key_chain[chest_open_key[i]])
		{
			-- key_chain[chest_open_key[i]];
			opened[i] = true;

			for (int k : chest_add_key[i])
				++ key_chain[k];

			order.push_back(i);

			if (dfs(N, chest_open_key, chest_add_key, key_chain, order, opened))
				return true;

			order.pop_back();

			for (int k : chest_add_key[i])
				-- key_chain[k];

			opened[i] = false;
			++ key_chain[chest_open_key[i]];
		}
	}

	return false;
}

bool check(vector<int>& init_key, vector<int>& chest_open_key, vector<vector<int>>& chest_add_key, vector<int>& configure)
{
	map<int, int> key_chain;

	for (auto k : init_key)
		++ key_chain[k];

	for (auto c : configure)
	{
		//cout << "try to open " << c << "\n";
		//cout << "need " << chest_open_key[c] << "\n";

		if (key_chain[chest_open_key[c]] == 0)
			return false;

		-- key_chain[chest_open_key[c]];

		for (auto k : chest_add_key[c])
			++ key_chain[k];
	}

	return true;
}

vector<int> treasure(int K, int N, vector<int>& init_key, vector<int>& chest_open_key, vector<vector<int>>& chest_add_key)
{
	//cout << "\n";

#if 0
	vector<int> order;
	vector<bool> opened(N + 1);
	map<int, int> key_chain;

	for (auto k : init_key)
		++ key_chain[k];

	if (dfs(N, chest_open_key, chest_add_key, key_chain, order, opened))
		return order;
#endif

#if 0
	map<int, int> needed_key;

	for (int i = 1; i <= N; ++i)
		++ needed_key[chest_open_key[i]];

	for (auto k : init_key)
		-- needed_key[k];

	for (auto& chest : chest_add_key)
		for (auto k : chest)
			-- needed_key[k];

	for (auto& [k, v] : needed_key)
		if (v > 0)
			return {};

	vector<int> configure(N);
	iota(begin(configure), end(configure), 1);

	do
	{
		//print(configure);
		if (check(init_key, chest_open_key, chest_add_key, configure))
			return configure;
	} while (next_permutation(begin(configure), end(configure)));
#endif

	return {};
}

int main()
{
	int T;
	cin >> T;

	for (int t = 1; t <= T; ++t)
	{
		int K, N;
		cin >> K >> N;

		vector<int> init_key(K);

		for (auto& k : init_key)
			cin >> k;

		vector<int> chest_open_key(N + 1);
		vector<vector<int>> chest_add_key(N + 1);

		for (int i = 1; i <= N; ++i)
		{
			cin >> chest_open_key[i];
			int k;
			cin >> k;

			while (k --)
			{
				int kk;
				cin >> kk;
				chest_add_key[i].push_back(kk);
			}
		}

		cout << "Case #" << t << ": ";
		auto r = treasure(K, N, init_key, chest_open_key, chest_add_key);
		if (r.empty())
			cout << "IMPOSSIBLE\n";
		else
			print(r);
	}

	return 0;
}

