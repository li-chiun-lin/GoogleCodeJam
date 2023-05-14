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

unsigned long long sum(unsigned long long r, unsigned long long k)
{
	return k * k * 2 + (r * 2 - 1) * k;
}

unsigned long long bullseye(unsigned long long r, unsigned long long t)
{
	unsigned long long left = 0, right = 1, m = 0;

	while (sum(r, right) <= t)
	{
		left = right;
		right <<= 1;
	}

	while (left + 1 < right)
	{
		m = left + (right - left) / 2;

		if (sum(r, m) <= t)
			left = m;
		else
			right = m;
	}

	return left;
}

int main()
{
	int T;
	cin >> T;

	for (int t = 1; t <= T; ++t)
	{
		unsigned long long r, tt;
		cin >> r >> tt;

		cout << "Case #" << t << ": ";
		cout << bullseye(r, tt) << "\n";
	}

	return 0;
}

