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

int dancing(int N, int S, int p, vector<int>& T)
{
	int cnt = 0;
	int a = 0, r = 0;

	sort(rbegin(T), rend(T));

	for (auto t : T)
	{
		r = t % 3;
		a = t / 3;

		if (r == 0)
		{
			if (a >= p)
				++ cnt;
			else if (S && t >= 3 && a + 1 >= p)
			{
				-- S;
				++ cnt;
			}
		}
		else if (r == 1)
		{
			if (a + 1 >= p)
				++ cnt;
		}
		else
		{
			if (a + 1 >= p)
				++ cnt;
			else if (S && a + 2 >= p)
			{
				-- S;
				++ cnt;
			}
		}
	}

	return cnt;
}

int main()
{
	int T;
	cin >> T;

	for (int t = 1; t <= T; ++t)
	{
		int N, S, p;
		cin >> N >> S >> p;

		vector<int> T(N);

		for (auto& t : T)
			cin >> t;

		cout << "Case #" << t << ": ";
		cout << dancing(N, S, p, T) << "\n";
	}

	return 0;
}

