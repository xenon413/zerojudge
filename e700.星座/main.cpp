#include<iostream>

using namespace std;

int main(void)
{
	int a, b;
	char c;
	while (cin >> a >> c >> b)
	{
		switch (a)
		{
		case 1:
			if (b >= 21)
				cout << "水瓶座";
			else
				cout << "摩羯座";
			break;
		case 2:
			if (b >= 20)
				cout << "雙魚座";
			else
				cout << "水瓶座";
			break;
		case 3:
			if (b >= 21)
				cout << "牡羊座";
			else
				cout << "雙魚座";
			break;
		case 4:
			if (b >= 21)
				cout << "金牛座";
			else
				cout << "牡羊座";
			break;
		case 5:
			if (b >= 22)
				cout << "雙子座";
			else
				cout << "金牛座";
			break;
		case 6:
			if (b >= 22)
				cout << "巨蟹座";
			else
				cout << "雙子座";
			break;
		case 7:
			if (b >= 23)
				cout << "獅子座";
			else
				cout << "巨蟹座";
			break;
		case 8:
			if (b >= 22)
				cout << "處女座";
			else
				cout << "獅子座";
			break;
		case 9:
			if (b >= 24)
				cout << "天秤座";
			else
				cout << "處女座";
			break;
		case 10:
			if (b >= 24)
				cout << "天蠍座";
			else
				cout << "天秤座";
			break;
		case 11:
			if (b >= 23)
				cout << "射手座";
			else
				cout << "天蠍座";
			break;
		case 12:
			if (b >= 23)
				cout << "摩羯座";
			else
				cout << "射手座";
			break;
		}
		cout << endl;
	}
}