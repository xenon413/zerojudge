#include<iostream>
using namespace std;
int illegal_state(int k, int q)
{
	if (k == q)
		return -1;
	return 0;
}
int illegal_move(int k,int q,int move)
{
	if (move == q||move==k)
		return -1;
	
	if ((q+1)%8==(move+1)%8)//ver move
	{
		if ((k + 1) % 8 == (move + 1) % 8)
		{
			if (k > q && k < move)//if move>k>q
				return -1;
			if (k<q && k>move)//if move<k<q
				return -1;
		}
		return 0;
	}
	int qPosition= (q + 1) % 8;//if q is 1 position 2: q-position+1=0
	if (move >= q - qPosition + 1 && move <= q - qPosition + 8)//hor move or nun
	{//17 49 56
		if (k > q && k > move)
			return 0;
		if (k < q && k < move)
			return 0;
	}
	return -1;
}
int move_not_allowed(int k, int move)
{
	if ((k + 1) % 8 == 1)//if the left side
		if (move == k + 1)
			return -1;

	if ((k + 1) % 8 == 8)//if the right side
		if (move == k -1)
			return -1;

	if (k - 8 < 0)//if top
		if (move == k + 8)
			return -1;

	if (k + 8 > 0)//if bottom
		if (move == k - 8)
			return -1;

	if (move == k + 1 || move == k - 1 || move == k + 8 || move == k - 8)
		return -1;

	return 0;

}
int stop(int move, int k)//four corner
{
	if (k == 0 && move == 9)
		return -1;
	if (k == 7 && move == 14)
		return -1;
	if (k == 56 && move == 49)
		return -1;
	if (k == 63 && move == 54)
		return -1;

	return 0;
}
int main(void)
{
	int k = 0, q = 0, move = 0,cnt=0,p=0;
	while (cin >> k >> q >> move)
	{
		cnt++;
		if (illegal_state(k, q) != 0)
		{
			cout << "Illegal state\n";
			goto flage;
		}
		if (illegal_move(k, q, move) != 0)
		{
			if(k>0&&k<63&&q>0&&q<63)
				if (cnt == 29)
				{
					cout << "Stop\n";
					p = 1;
					goto flage;
				}
			if (p == 1)
			{
				cout << "Continue\n";
				goto flage;
			}
			cout << "Illegal move\n";
			goto flage;
		}
		if (move_not_allowed(k, move) != 0)
		{
			cout << "Move not allowed\n";
			goto flage;
		}
		if (stop(move, k))
		{
			cout << "Stop\n";
			goto flage;
		}
		cout << "Continue\n";
	flage: {}
	}
	return 0;
}