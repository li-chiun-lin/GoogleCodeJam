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

string tictactoe(vector<string>& board)
{
	int empty_cell = 0;
	int O = 0, X = 0;

	for (int i = 0; i < 4; ++i)
	{
		O = 0, X = 0;

		for (int j = 0; j < 4; ++j)
		{
			if (board[i][j] == 'X' || board[i][j] == 'T')
				X |= 1 << j;

			if (board[i][j] == 'O' || board[i][j] == 'T')
				O |= 1 << j;

			if (board[i][j] == '.')
				++ empty_cell;
		}

		if (O == X)
			;
		else if (O == 0x0f)
			return "O won";
		else if (X == 0x0f)
			return "X won";
		else
			;
	}

	for (int j = 0; j < 4; ++j)
	{
		O = 0, X = 0;

		for (int i = 0; i < 4; ++i)
		{
			if (board[i][j] == 'X' || board[i][j] == 'T')
				X |= 1 << i;

			if (board[i][j] == 'O' || board[i][j] == 'T')
				O |= 1 << i;
		}

		if (O == X)
			;
		else if (O == 0x0f)
			return "O won";
		else if (X == 0x0f)
			return "X won";
		else
			;
	}

	O = 0, X = 0;

	for (int d = 0; d < 4; ++d)
	{
		if (board[d][d] == 'X' || board[d][d] == 'T')
			X |= 1 << d;

		if (board[d][d] == 'O' || board[d][d] == 'T')
			O |= 1 << d;
	}

	if (O == X)
		;
	else if (O == 0x0f)
		return "O won";
	else if (X == 0x0f)
		return "X won";
	else
		;

	O = 0, X = 0;

	for (int d = 0; d < 4; ++d)
	{
		if (board[d][3 - d] == 'X' || board[d][3 - d] == 'T')
			X |= 1 << d;

		if (board[d][3 - d] == 'O' || board[d][3 - d] == 'T')
			O |= 1 << d;
	}

	if (O == X)
		;
	else if (O == 0x0f)
		return "O won";
	else if (X == 0x0f)
		return "X won";
	else
		;

	return empty_cell ? "Game has not completed" : "Draw";
}

int main()
{
	int T;
	cin >> T;

	for (int t = 1; t <= T; ++t)
	{
		vector<string> board(4);

		for (auto& b : board)
			cin >> b;

		cout << "Case #" << t << ": ";
		cout << tictactoe(board) << "\n";
	}

	return 0;
}

