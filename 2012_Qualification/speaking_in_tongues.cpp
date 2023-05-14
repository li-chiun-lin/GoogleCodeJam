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

string speaking(string& G)
{
	vector<char> translate = 
	{
		'y', 'h', 'e', 's', 'o', //a, b, c, d, e
		'c', 'v', 'x', 'd', 'u', //f, g, h, i, j
		'i', 'g', 'l', 'b', 'k', //k, l, m, n, o
		'r', 'z', 't', 'n', 'w', //p, q, r, s, t
		'j', 'p', 'f', 'm', 'a', //u, v, w, x, y
		'q', 					 //z
	};

	for (char& c : G)
		if (c != ' ')
			c = translate[c - 'a'];

	return G;
}

int main()
{
	int T;
	cin >> T;

	string G;
	// remove the 'new line' symbol at the first line.
	getline(std::cin, G);

	for (int t = 1; t <= T; ++t)
	{
		getline(std::cin, G);

		cout << "Case #" << t << ": ";
		cout << speaking(G) << "\n";
	}

	return 0;
}

