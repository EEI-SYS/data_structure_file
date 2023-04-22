#include <stdio.h>

int findArrayMax(int score[], int n)
{
	int tmp = score[0];
	for (int i = 0; i < n; i++)
	{
		if (score[i] > tmp)
		{
			tmp = score[i];
		}
		
	}
	return tmp;
}

int main()
{
	int array[5] = { 0,1,2,3,4 };
	int n = 5;

	int out;

	out = findArrayMax(array, n);
	printf("제일 큰 숫자 : %d\n", out);
	return 0;
}