#include<stdio.h>
int main()
{
	int a, b,num,pro=0;
	int num1, num2, ans = 0;
	int* arr;
	for (int i = 0; i < 2; i++)
	{
		pro = 0;
		scanf("%d%d", &a, &b);
		arr = new int[a];
		for (int i = 0; i < a; i++)
		{
			scanf("%d", &num);
			pro += num;
			arr[i] = pro;
		}

		for (int i = 0; i < b; i++)
		{
			scanf("%d%d", &num1, &num2);
			if (num1 == 1)
				printf("%d\n", arr[num2 - 1]);
			else
				printf("%d\n", arr[num2 - 1] - arr[num1 - 2]);
		}
		delete[]arr;
	}
	
}