#include<iostream>

using namespace std;

int main(void)
{
	bool check;
	string time,m,h;
	float M, H,angle;
	while (cin >> time)
	{
		if (time == "0:00")
			break;
		angle = 0;
		m="";
		h="";
		check = false;
		for (int i = 0; i < time.size(); i++)
		{
			if (time[i] == ':')
			{
				check = true;
				continue;
			}
			if (!check)
				h.push_back(time[i]);
			else
				m.push_back(time[i]);
		}
		if (m[0] == '0')
			M = m[1] - 48;
		else
			M = (m[0] - 48) * 10 + m[1]-48;

		if (h.size() == 1)
			H = h[0] - 48;
		else
			H = (h[0] - 48) * 10 + h[1] - 48;
		angle += H * 30;
		angle += M * 0.5 - M * 6;
		if (angle < 0)
			angle = -angle;
		if (angle > 180)
			angle = 360 - angle;
		printf("%.3f\n", angle);
	}
	return 0;
}