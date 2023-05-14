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

void print(vector<vector<int>>& m)
{
	for (auto& r : m)
	{
		for (auto c : r)
			cout << c << " ";
		cout << "\n";
	}
	cout << "\n";
}

bool lawnmower(int N, int M, vector<vector<int>>& lawn)
{
	vector<vector<int>> lawn2(N, vector<int>(M, INT_MAX));

	for (int i = 0; i < N; ++i)
	{
		int h = *max_element(begin(lawn[i]), end(lawn[i]));

		for (int j = 0; j < M; ++j)
			lawn2[i][j] = min(lawn2[i][j], h);
	}

	for (int j = 0; j < M; ++j)
	{
		int h = -1;

		for (int i = 0; i < N; ++i)
			h = max(h, lawn[i][j]);

		for (int i = 0; i < N; ++i)
			lawn2[i][j] = min(lawn2[i][j], h);
	}

	for (int i = 0; i < N; ++i)
		for (int j = 0; j < M; ++j)
			if (lawn[i][j] != lawn2[i][j])
				return false;

	return true;
}

int main()
{
	int T;
	cin >> T;

	for (int t = 1; t <= T; ++t)
	{
		int N, M;
		cin >> N >> M;

		vector<vector<int>> lawn(N, vector<int>(M));

		for (auto& r : lawn)
			for (auto& c : r)
				cin >> c;

		cout << "Case #" << t << ": ";
		cout << (lawnmower(N, M, lawn) ? "YES" : "NO") << "\n";
	}

	return 0;
}

