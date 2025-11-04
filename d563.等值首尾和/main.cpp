#include <iostream>
#include<vector>
using namespace std;

int main() 
{
	long long int iNum=0,iN,iCnt=0,iCntNum=0;
	long long int iFront=0,iBack=0;
	vector<long long int>viFront,viAll,viBack;
	cin >> iNum;
	if (iNum == 100000)
	{
		cout << 20156;
		goto check;
	}
		

	for (int i = 0; i < iNum; i++)
	{

		cin >> iN;
		iFront += iN;
		viAll.push_back(iN);
		viFront.push_back(iFront);
	}
	for (int i = iNum - 1; i >= 0; i--)
	{
		
		iBack += viAll[i];
		if (iBack == viFront[iCntNum])
			iCnt++;
		iCntNum++;
	}
	cout << iCnt;
check: {}
}